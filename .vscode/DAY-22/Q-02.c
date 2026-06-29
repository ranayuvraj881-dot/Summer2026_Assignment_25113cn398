//write a program to count words in a sentence
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, words = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Count words
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            words++;
        }
        i++;
    }

    printf("Number of words: %d\n", words);
    return 0;
}