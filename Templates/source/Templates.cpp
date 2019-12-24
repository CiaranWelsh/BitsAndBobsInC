

#include <iostream>
using namespace std;

template<class T>
        T GetMax(T a, T b){
            T result;
            result = (a>b)? a : b;
            return result;
        }



int main(){
    cout << "hello world" << endl;
    int x = 4;
    int y = 5;
    int ans = GetMax<int>(x, y);
    int ans2 = GetMax<double>(5.6, 7.8);
    cout << ans << endl;
    cout << ans2 << endl;
    return 0;
};
