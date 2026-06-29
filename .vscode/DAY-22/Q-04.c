//write a program to remove spaces from a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove leading spaces
    for (i = 0; str[i] == ' '; i++);

    // Shift the string to the left
    for (j = 0; str[i] != '\0'; i++, j++) {
        str[j] = str[i];
    }
    str[j] = '\0';

    // Remove trailing spaces
    for (i = strlen(str) - 1; i >= 0 && str[i] == ' '; i--);
    str[i + 1] = '\0';

    printf("String after removing spaces: %s\n", str);
    return 0;
}