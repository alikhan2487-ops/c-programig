/*
NAME:ALI AZMATULLAH KHAN
UIN:251M011
CLASS:F.E MECHANICAL
DIV:F
*/

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int choice;

    while (1) {
        printf("\n--- Employee Database Menu ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            fp = fopen("employee.txt", "a");
            if (fp == NULL) {
                printf("Error in file opening!\n");
                exit(1);
            }

            printf("Enter Employee ID: ");
            scanf("%d", &e.id);
            printf("Enter Employee Name: ");
            scanf("%s", e.name);
            printf("Enter Salary: ");
            scanf("%f", &e.salary);

            fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
            fclose(fp);
            printf("Employee Added Successfully!\n");
        }

        else if (choice == 2) {
            fp = fopen("employee.txt", "r");
            if (fp == NULL) {
                printf("No record found!\n");
                continue;
            }

            printf("\n--- Employee Records ---\n");
            while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
                printf("ID: %d\nName: %s\nSalary: %.2f\n\n", e.id, e.name, e.salary);
            }
            fclose(fp);
        }

        else if (choice == 3) {
            printf("Exiting program...\n");
            break;
        }

        else {
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}
  