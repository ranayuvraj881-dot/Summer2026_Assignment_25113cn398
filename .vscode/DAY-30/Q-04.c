//write a  program to develop complete mini project using arrays,strings and function
#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    char course[30];
    float marks;
};

struct Student s[100];
int count = 0;

// Function to calculate grade
char calculateGrade(float marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 75)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks >= 40)
        return 'D';
    else
        return 'F';
}

// Function to add student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter Course: ");
    scanf(" %[^\n]", s[count].course);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
    printf("\nStudent Record Added Successfully!\n");
}

// Function to display students
void displayStudents()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n============== STUDENT RECORDS ==============\n");

    for(i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", s[i].rollNo);
        printf("Name    : %s\n", s[i].name);
        printf("Course  : %s\n", s[i].course);
        printf("Marks   : %.2f\n", s[i].marks);
        printf("Grade   : %c\n", calculateGrade(s[i].marks));
    }
}

// Function to search student
void searchStudent()
{
    int roll, found = 0, i;

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++)
    {
        if(s[i].rollNo == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", s[i].rollNo);
            printf("Name    : %s\n", s[i].name);
            printf("Course  : %s\n", s[i].course);
            printf("Marks   : %.2f\n", s[i].marks);
            printf("Grade   : %c\n", calculateGrade(s[i].marks));
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Not Found!\n");
}

// Function to update student
void updateStudent()
{
    int roll, found = 0, i;

    printf("\nEnter Roll Number to Update: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++)
    {
        if(s[i].rollNo == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Course: ");
            scanf(" %[^\n]", s[i].course);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("\nRecord Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Not Found!\n");
}

// Function to delete student
void deleteStudent()
{
    int roll, found = 0, i, j;

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++)
    {
        if(s[i].rollNo == roll)
        {
            for(j = i; j < count - 1; j++)
            {
                s[j] = s[j + 1];
            }

            count--;
            found = 1;

            printf("\nRecord Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n======================================");
        printf("\n MINI STUDENT MANAGEMENT SYSTEM");
        printf("\n======================================");
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