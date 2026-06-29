//write a program to check anagram strings

#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0}; // Frequency array for ASCII characters
    int i;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    // Count frequency of each character in both strings
    for (i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}