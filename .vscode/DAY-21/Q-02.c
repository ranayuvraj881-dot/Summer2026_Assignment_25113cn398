//write a program to reverse a  string
#include <stdio.h>
int main() {
    char str[100], reversed[100];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate string length
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length - 1; i++) { // length - 1 to ignore the newline character
        reversed[i] = str[length - 2 - i]; // length - 2 to skip the newline character
    }
    reversed[i] = '\0'; // Null-terminate the reversed string

    printf("Reversed string: %s\n", reversed);

    return 0;
}