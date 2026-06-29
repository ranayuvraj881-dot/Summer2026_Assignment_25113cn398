//write a program to compress a string
#include <stdio.h>
void compressString(char str[]) {
    int i, count;
    char compressed[100];
    int index = 0;

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;
        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }
        compressed[index++] = str[i];
        if (count > 1) {
            index += sprintf(&compressed[index], "%d", count);
        }
    }
    compressed[index] = '\0';
    printf("Compressed string: %s\n", compressed);
}