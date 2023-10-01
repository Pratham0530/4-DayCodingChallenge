#include<stdio.h>
int main(){
    char character;
    
    printf("Enter a character: ");
    scanf("%c", &character);

    // Use the %d format specifier to print the ASCII value
    printf("ASCII value of %c is %d\n", character,character);

    return 0;

}