//write a program to find longest word 
#include <stdio.h>
int main() {
    char str[100], longest[100];
    int i = 0, length = 0, maxLength = 0, start = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            length++;
        } else {
            if (length > maxLength) {
                maxLength = length;
                start = i - length;
            }
            length = 0;
        }
        i++;
    }

    // Check for the last word
    if (length > maxLength) {
        maxLength = length;
        start = i - length;
    }

    // Copy the longest word to the longest array
    for (i = 0; i < maxLength; i++) {
        longest[i] = str[start + i];
    }
    longest[maxLength] = '\0';

    printf("The longest word is: %s\n", longest);
    return 0;
}