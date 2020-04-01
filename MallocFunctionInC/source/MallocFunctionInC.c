
#include <stdio.h>
#include <stdlib.h>

void TutorialsPointExplaination() {
    char *str;

    str = (char *) malloc(15); // 1 per char + 1 for terminator
    strcpy(str, "tutorialspoint");
    printf("string = %s, address = %u\n", str, str);

    str = (char *) realloc(str, 25);
    strcat(str, ".com");
    printf("string = %s, address = %u\n\n\n", str, str);

    free(str);
}

void GeeksForGeeksExplainationDynanimcAllocation() {
    char *str;
    int size = 4;
    str = (char *) malloc(sizeof(char) * size);
    *(str + 0) = 'G';
    *(str + 1) = 'f';
    *(str + 2) = 'G';
    *(str + 3) = '\0'; //a string terminator
    printf("string = %s, address = %u\n\n\n", str, str);
}

void GeeksForGeeksExplainationReadOnly() {
    char *str;
    str = "GfG"; // stored in read only part of data segment
    *(str + 1) = 'n';  // Trying to modify readonly data. Sad face.
    getchar();

    char str2[] = "GfG";  /* Stored in stack segment like other auto variables */
    *(str2 + 1) = 'n';   /* No problem: String is now GnG */
    getchar();
}

int main() {

    TutorialsPointExplaination();

    GeeksForGeeksExplainationDynanimcAllocation();

    GeeksForGeeksExplainationReadOnly();

    return 0;
};
