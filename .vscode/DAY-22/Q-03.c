//write a program to character freuency in a string
#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0}; // Frequency array for ASCII characters
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    while (str[i] != '\0') {
        freq[(unsigned char)str[i]]++;
        i++;
    }

    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}