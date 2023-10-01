#include <stdio.h>

int main() {
    FILE *file;
    char c;

    file = fopen(__FILE__, "r");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }

    fclose(file);

    return 0;
}
