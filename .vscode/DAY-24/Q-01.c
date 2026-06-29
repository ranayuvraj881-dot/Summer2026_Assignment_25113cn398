//write a program to check string rotation
#include <stdio.h>
int isSubstring(char str1[], char str2[]) {
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0' && str1[i + j] == str2[j]; j++);
        if (str2[j] == '\0') {
            return 1; // str2 is a substring of str1
        }
    }
    return 0; // str2 is not a substring of str1
}