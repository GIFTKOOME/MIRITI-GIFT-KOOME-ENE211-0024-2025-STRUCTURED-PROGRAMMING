#include <stdio.h>

int main()
{
    int n;
    int i;
    int regNo;
    char name[50];
    int marks;
    char grade;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\nEnter information for student %d\n", i);

        printf("Registration number: ");
        scanf("%d", &regNo);

        printf("Name: ");
        scanf("%s", name);

        printf("Marks: ");
        scanf("%d", &marks);

        if(marks >= 70)
        {
            grade = 'A';
        }
        else if(marks >= 60)
        {
            grade = 'B';
        }
        else if(marks >= 50)
        {
            grade = 'C';
        }
        else if(marks >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }

        printf("\n------------------------------\n");
        printf("       STUDENT INFORMATION\n");
        printf("------------------------------\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        if(marks >= 40)
        {
            printf("Status: Pass\n");
        }
        else
        {
            printf("Status: Fail\n");
        }

        printf("------------------------------\n");
    }

    return 0;
}
