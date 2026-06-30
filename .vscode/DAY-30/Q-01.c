//write a program to create student record system using arrays and strings
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    char branch[30];
    float marks;
};

struct Student student[100];
int count = 0;

// Function to add a student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &student[count].roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", student[count].name);

    printf("Enter Branch: ");
    scanf(" %[^\n]", student[count].branch);

    printf("Enter Marks: ");
    scanf("%f", &student[count].marks);

    count++;
    printf("\nStudent Record Added Successfully!\n");
}

// Function to display all students
void displayStudents()
{
    if(count == 0)
    {
        printf("\nNo Student Records Found!\n");
        return;
    }

    printf("\n========== STUDENT RECORDS ==========\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", student[i].roll);
        printf("Name    : %s\n", student[i].name);
        printf("Branch  : %s\n", student[i].branch);
        printf("Marks   : %.2f\n", student[i].marks);
    }
}

// Function to search a student
void searchStudent()
{
    int roll, found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(student[i].roll == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", student[i].roll);
            printf("Name    : %s\n", student[i].name);
            printf("Branch  : %s\n", student[i].branch);
            printf("Marks   : %.2f\n", student[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Record Not Found!\n");
}

// Function to update student record
void updateStudent()
{
    int roll, found = 0;

    printf("\nEnter Roll Number to Update: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(student[i].roll == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", student[i].name);

            printf("Enter New Branch: ");
            scanf(" %[^\n]", student[i].branch);

            printf("Enter New Marks: ");
            scanf("%f", &student[i].marks);

            printf("\nRecord Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Record Not Found!\n");
}

// Function to delete student record
void deleteStudent()
{
    int roll, found = 0;

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(student[i].roll == roll)
        {
            for(int j = i; j < count - 1; j++)
            {
                student[j] = student[j + 1];
            }

            count--;
            found = 1;
            printf("\nStudent Record Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Record Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n==================================");
        printf("\n    STUDENT RECORD SYSTEM");
        printf("\n==================================");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
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

