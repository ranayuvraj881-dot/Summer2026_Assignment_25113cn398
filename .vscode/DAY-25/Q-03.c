//write a program to sort names alphabetically
#include <stdio.h>
#include <string.h>

int main() {
    char names[10][50];
    int i, j, n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    printf("Enter the names:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Sort the names alphabetically
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[50];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names sorted alphabetically:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}