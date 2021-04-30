#include <stdio.h>
struct person
{
char name[20];
char doj[10];
float salary;
}p[2];
int main(void){
int i = 0;
for (i = 0; i<2; i++){
printf("\nEnter Person Name:");
scanf("%s", p[i].name);
printf("\nEnter Person Date of Joining (dd-mm-yyyy):");
scanf("%s", p[i].doj);
printf("\nEnter Person Salary:");
scanf("%f", &p[i].salary);
}
for (i = 0; i < 2; i++){
printf("\nPerson %d Detail\n", i + 1);
printf("\nName = %s", p[i].name);
printf("\nDOJ = %s", p[i].doj);
printf("\nSalary = %.2f", p[i].salary);
}
return 0;
}
