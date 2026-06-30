//write a program to create inventory management system
#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Product inventory[100];
int count = 0;

// Function to add a product
void addProduct()
{
    printf("\nEnter Product ID: ");
    scanf("%d", &inventory[count].id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", inventory[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &inventory[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &inventory[count].price);

    count++;
    printf("\nProduct Added Successfully!\n");
}

// Function to display all products
void displayProducts()
{
    if(count == 0)
    {
        printf("\nNo Products Available!\n");
        return;
    }

    printf("\n========== INVENTORY ==========\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("ID       : %d\n", inventory[i].id);
        printf("Name     : %s\n", inventory[i].name);
        printf("Quantity : %d\n", inventory[i].quantity);
        printf("Price    : %.2f\n", inventory[i].price);
    }
}

// Function to search a product
void searchProduct()
{
    int id, found = 0;

    printf("\nEnter Product ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(inventory[i].id == id)
        {
            printf("\nProduct Found!\n");
            printf("ID       : %d\n", inventory[i].id);
            printf("Name     : %s\n", inventory[i].name);
            printf("Quantity : %d\n", inventory[i].quantity);
            printf("Price    : %.2f\n", inventory[i].price);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nProduct Not Found!\n");
}

// Function to update quantity
void updateQuantity()
{
    int id, found = 0;

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(inventory[i].id == id)
        {
            printf("Enter New Quantity: ");
            scanf("%d", &inventory[i].quantity);

            printf("\nQuantity Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nProduct Not Found!\n");
}

// Function to delete a product
void deleteProduct()
{
    int id, found = 0;

    printf("\nEnter Product ID to Delete: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(inventory[i].id == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                inventory[j] = inventory[j + 1];
            }

            count--;
            found = 1;
            printf("\nProduct Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("\nProduct Not Found!\n");
}

// Main Function
int main()
{
    int choice;

    do
    {
        printf("\n================================");
        printf("\n INVENTORY MANAGEMENT SYSTEM");
        printf("\n================================");
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Update Quantity");
        printf("\n5. Delete Product");
        printf("\n6. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateQuantity();
                break;

            case 5:
                deleteProduct();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}