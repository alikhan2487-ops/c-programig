/*
NAME:ALI AZMATULLAH KHAN
UIN:251M011
CLASS:F.E MECHANICAL
DIV:F
*/
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str,100,stdin);   
    for (i = 1; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of the string = %d", length);

    return 0;
}