//write a program to create employee management system
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 100

struct Employee {
    int id;
    char name[MAX_NAME_LENGTH];
    int age;
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    do {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_EMPLOYEES) {
                    printf("Enter employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter employee name: ");
                    scanf("%s", employees[count].name);
                    printf("Enter employee age: ");
                    scanf("%d", &employees[count].age);
                    printf("Enter employee salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                    printf("Employee added successfully.\n");
                } else {
                    printf("Maximum number of employees reached.\n");
                }
                break;
            case 2:
                printf("Employee Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Age: %d, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
                }
                break;
            case 3:
                int searchId;
                printf("Enter employee ID to search: ");
                scanf("%d", &searchId);
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == searchId) {
                        printf("Employee found:\n");
                        printf("ID: %d, Name: %s, Age: %d, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
                        break;
                    }
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}