//write a program to create salary management system
#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    do {
        printf("\nSalary Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Salaries\n");
        printf("3. Update Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_EMPLOYEES) {
                    printf("Enter employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter employee salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                    printf("Employee added successfully.\n");
                } else {
                    printf("Maximum number of employees reached.\n");
                }
                break;
            case 2:
                printf("Employee Salaries:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Salary: %.2f\n", employees[i].id, employees[i].salary);
                }
                break;
            case 3:
                int updateId;
                float newSalary;
                printf("Enter employee ID to update salary: ");
                scanf("%d", &updateId);
                printf("Enter new salary: ");
                scanf("%f", &newSalary);
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == updateId) {
                        employees[i].salary = newSalary;
                        printf("Salary updated successfully.\n");
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