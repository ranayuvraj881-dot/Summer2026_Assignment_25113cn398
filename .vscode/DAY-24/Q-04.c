//write a program to remove duplicate characters.
#include <stdio.h>
int main() {
    char str[100], result[100];
    int i, j, k = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                break;
            }
        }
        if (j == k) {
            result[k++] = str[i];
        }
    }
    result[k] = '\0';

    printf("String after removing duplicates: %s\n", result);
    return 0;
}