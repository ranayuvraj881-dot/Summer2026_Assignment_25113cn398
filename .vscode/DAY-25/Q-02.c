//write a program to find common characters in strings
#include <stdio.h>
int main() {
    char str1[100], str2[100], common[100];
    int i, j, k = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                common[k++] = str1[i];
                break;
            }
        }
    }
    common[k] = '\0';

    printf("Common characters: %s\n", common);
    return 0;
}