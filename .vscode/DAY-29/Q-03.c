//write a program to create menu driven string operations
#include <stdio.h>
int main()  
{
    char str[100], temp;
    int choice, i, j, len;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // Calculate length of the string
    for(len = 0; str[len] != '\0'; len++);

    do
    {
        printf("\nMenu Driven String Operations\n");
        printf("1. Display String\n");
        printf("2. Reverse String\n");
        printf("3. Count Vowels\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("String: %s\n", str);
                break;

            case 2:
                for(i = 0, j = len - 1; i < j; i++, j--)
                {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
                printf("Reversed String: %s\n", str);
                break;

            case 3:
                int vowelCount = 0;
                for(i = 0; i < len; i++)
                {
                    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
                       str[i] == 'o' || str[i] == 'u' || 
                       str[i] == 'A' || str[i] == 'E' || 
                       str[i] == 'I' || str[i] == 'O' || 
                       str[i] == 'U')
                    {
                        vowelCount++;
                    }
                }
                printf("Number of vowels: %d\n", vowelCount);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}