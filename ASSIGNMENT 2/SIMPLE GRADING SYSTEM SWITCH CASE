
#include <stdio.h>

int main() {
    int N, i;
    int registrationNumber;
    int marks;
    char name[50];
    char grade;

    // Ask for number of students
    printf("Enter the number of students: ");
    scanf("%d", &N);

    // Loop for each student
    for (i = 1; i <= N; i++) {

        printf("\n===== Enter Student %d Information =====\n", i);

        printf("Registration Number: ");
        scanf("%d", &registrationNumber);

        printf("Name: ");
        scanf(" %[^\n]", name);

        printf("Marks: ");
        scanf("%d", &marks);

        // Grade classification using switch-case
        switch (marks / 10) {

            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;

            case 6:
                grade = 'B';
                break;

            case 5:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            default:
                grade = 'F';
                break;
        }

        // Display student information
        printf("\n----------------------------------------\n");
        printf("           STUDENT INFORMATION\n");
        printf("----------------------------------------\n");

        printf("Registration No: %d\n", registrationNumber);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        // Pass/Fail using if-else
        if (marks >= 40) {
            printf("Status: PASS\n");
        } else {
            printf("Status: FAIL\n");
        }

        printf("----------------------------------------\n");
    }

    return 0;
}
