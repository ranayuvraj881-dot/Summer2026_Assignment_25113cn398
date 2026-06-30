//write a program to create mini employee management system
#include <stdio.h>
#include <string.h>

struct Employee
{
    int empId;
    char name[50];
    char department[30];
    float salary;
};

struct Employee emp[100];
int count = 0;

// Function to add an employee
void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp[count].department);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;

    printf("\nEmployee Added Successfully!\n");
}

// Function to display all employees
void displayEmployees()
{
    if(count == 0)
    {
        printf("\nNo Employee Records Found!\n");
        return;
    }

    printf("\n========== EMPLOYEE RECORDS ==========\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", emp[i].empId);
        printf("Name        : %s\n", emp[i].name);
        printf("Department  : %s\n", emp[i].department);
        printf("Salary      : %.2f\n", emp[i].salary);
    }
}

// Function to search an employee
void searchEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(emp[i].empId == id)
        {
            printf("\nEmployee Found!\n");
            printf("Employee ID : %d\n", emp[i].empId);
            printf("Name        : %s\n", emp[i].name);
            printf("Department  : %s\n", emp[i].department);
            printf("Salary      : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nEmployee Not Found!\n");
}

// Function to update employee details
void updateEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID to Update: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(emp[i].empId == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", emp[i].name);

            printf("Enter New Department: ");
            scanf(" %[^\n]", emp[i].department);

            printf("Enter New Salary: ");
            scanf("%f", &emp[i].salary);

            printf("\nEmployee Record Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nEmployee Not Found!\n");
}

// Function to delete employee
void deleteEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID to Delete: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(emp[i].empId == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                emp[j] = emp[j + 1];
            }

            count--;
            found = 1;

            printf("\nEmployee Record Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("\nEmployee Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n==================================");
        printf("\n MINI EMPLOYEE MANAGEMENT SYSTEM");
        printf("\n==================================");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Employee");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                deleteEmployee();
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