//write a program to create marksheet management system
#include <stdio.h>

#define MAX_STUDENTS 100
#define MAX_SUBJECTS 5

struct Student {
    int id;
    float marks[MAX_SUBJECTS];
    float total;
    float average;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("\nMarksheet Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Marksheets\n");
        printf("3. Update Marks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    printf("Enter student ID: ");
                    scanf("%d", &students[count].id);
                    printf("Enter marks for %d subjects:\n", MAX_SUBJECTS);
                    students[count].total = 0;
                    for (int i = 0; i < MAX_SUBJECTS; i++) {
                        printf("Subject %d: ", i + 1);
                        scanf("%f", &students[count].marks[i]);
                        students[count].total += students[count].marks[i];
                    }
                    students[count].average = students[count].total / MAX_SUBJECTS;
                    count++;
                    printf("Student added successfully.\n");
                } else {
                    printf("Maximum number of students reached.\n");
                }
                break;
            case 2:
                printf("Marksheets:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Total: %.2f, Average: %.2f\n", students[i].id, students[i].total, students[i].average);
                }
                break;
            case 3:
                int updateId;
                printf("Enter student ID to update marks: ");
                scanf("%d", &updateId);
                for (int i = 0; i < count; i++) {
                    if (students[i].id == updateId) {
                        printf("Enter new marks for %d subjects:\n", MAX_SUBJECTS);
                        students[i].total = 0;
                        for (int j = 0; j < MAX_SUBJECTS; j++) {
                            printf("Subject %d: ", j + 1);
                            scanf("%f", &students[i].marks[j]);
                            students[i].total += students[i].marks[j];
                        }
                        students[i].average = students[i].total / MAX_SUBJECTS;
                        printf("Marks updated successfully.\n");
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