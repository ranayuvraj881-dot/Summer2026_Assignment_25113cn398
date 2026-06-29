//write a program to find maximum occuring character in a string
#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0}; // Frequency array for ASCII characters
    int i = 0;
    int max_freq = 0;
    char max_char = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    while (str[i] != '\0') {
        freq[(unsigned char)str[i]]++;
        i++;
    }

    // Find the character with maximum frequency
    for (i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = (char)i;
        }
    }

    printf("The maximum occurring character is: '%c'\n", max_char);
    return 0;
}