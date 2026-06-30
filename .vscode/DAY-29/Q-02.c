//write a program to create menu driven array operations
#include <stdio.h>

int main()
{
    int arr[100], size, choice, i, pos, val;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\nMenu Driven Array Operations\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array elements are: ");
                for(i = 0; i < size; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter the position where you want to insert the element: ");
                scanf("%d", &pos);
                if(pos < 0 || pos >= size)
                {
                    printf("Invalid position!\n");
                }
                else
                {
                    printf("Enter the element to be inserted: ");
                    scanf("%d", &val);
                    for(i = size - 1; i >= pos; i--)
                    {
                        arr[i + 1] = arr[i];
                    }
                    arr[pos] = val;
                    size++;
                    printf("Element inserted successfully!\n");
                }
                break;

            case 3:
                printf("Enter the position of the element to be deleted: ");
                scanf("%d", &pos);
                if(pos < 0 || pos >= size)
                {
                    printf("Invalid position!\n");
                }
                else
                {
                    for(i = pos; i < size - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                    printf("Element deleted successfully!\n");
                }
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