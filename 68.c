#include <stdio.h>

int main() {
    FILE *file;
    char sentence[100];

    file = fopen("sentence.txt", "w");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter a sentence: ");
    gets(sentence);

    fprintf(file, "%s", sentence);
    fclose(file);

    printf("Sentence written to the file successfully.\n");

    return 0;
}
