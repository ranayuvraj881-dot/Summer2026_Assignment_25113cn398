//write a prpgram to find non repeating character in a string
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

    // Find the first non-repeating character
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("The first non-repeating character is: '%c'\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}