//write a program to ceate stuent record management system

#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 100

struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    int age;
    float grade;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    printf("Enter student ID: ");
                    scanf("%d", &students[count].id);
                    printf("Enter student name: ");
                    scanf("%s", students[count].name);
                    printf("Enter student age: ");
                    scanf("%d", &students[count].age);
                    printf("Enter student grade: ");
                    scanf("%f", &students[count].grade);
                    count++;
                    printf("Student added successfully.\n");
                } else {
                    printf("Maximum number of students reached.\n");
                }
                break;
            case 2:
                printf("Student Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Age: %d, Grade: %.2f\n", students[i].id, students[i].name, students[i].age, students[i].grade);
                }
                break;
            case 3:
                int searchId;
                printf("Enter student ID to search: ");
                scanf("%d", &searchId);
                for (int i = 0; i < count; i++) {
                    if (students[i].id == searchId) {
                        printf("Student found:\n");
                        printf("ID: %d, Name: %s, Age: %d, Grade: %.2f\n", students[i].id, students[i].name, students[i].age, students[i].grade);
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