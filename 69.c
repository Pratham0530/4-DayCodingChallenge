#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("sentence.txt", "r");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    if (fgets(line, sizeof(line), file) != NULL) {
        printf("First line from the file: %s\n", line);
    } else {
        printf("File is empty.\n");
    }

    fclose(file);

    return 0;
}
