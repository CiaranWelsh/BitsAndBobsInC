#include <iostream>
#include <stdexcept>
#include <sstream>

using namespace std;


class Exception : public std::logic_error {
    const char *msg;
    int line;
    std::string file;

    std::string build_exception() const {
        std::ostringstream stream;
        stream << file << ":" << line << ": " << msg << std::endl;
        return stream.str();
    }

public:
    explicit Exception(const char *msg) :
            line(line),
            file(file),
            msg(""), std::logic_error(build_exception()) {};

    Exception(const char *msg, const std::string &file, int line) :
            msg(msg),
            line(line),
            file(file),
            std::logic_error(build_exception()) {}

    ~Exception() noexcept override = default;

    Exception(Exception const &other) noexcept(true):
        msg(other.msg),
        line(other.line),
        file(other.file),
        logic_error(build_exception()) {};

    Exception &operator=(Exception const &other) = default;

    const char *what() const noexcept {
        const char *out = build_exception().c_str();
        return out;
    }
};


class AnotherError : public Exception {
public:
    using Exception::Exception;
};


int main() {

    throw AnotherError("You did wrong", __FILE__, __LINE__);
    return 0;
};
