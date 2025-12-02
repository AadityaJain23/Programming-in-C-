/* Write a C program to compute the monthly pay of 100 employees usingeachemployee‗s name, basic pay. 
The DA is computed as 52%of the basicpay. Gross-salary (basic pay + DA). 
Print the employees name and gross salary. */

#include <stdio.h>

struct Employee{
    char name[50];
    float basic;
    float gross;
};

int main(){
    struct Employee emp[100];
    int i;

    printf("Enter details of 100 employees:\n");

    for(i = 0; i < 100; i++){
        printf("\nEmployee %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", emp[i].name);

        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic);

        float da = 0.52 * emp[i].basic;

        emp[i].gross = emp[i].basic + da;
    }

    printf("\n==============================\n");
    printf("Employee Name      Gross Salary\n");
    printf("==============================\n");

    for(i = 0; i < 100; i++){
        printf("%-15s  %.2f\n", emp[i].name, emp[i].gross);
    }

    return 0;
}
