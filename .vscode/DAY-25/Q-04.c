//write a program to sort words by length
#include <stdio.h>
void sortWordsByLength(char words[][50], int n) {
    int i, j;
    char temp[50];

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}