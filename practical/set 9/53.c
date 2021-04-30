#include <stdio.h>
struct student_record
{
char name[20];
char branch[20];
int total_marks;
} p[2];
int main(void){
int i = 0, n = 2;
for (i = 0; i < n; i++){
printf("\nEnter Student Name:");
scanf("%s", p[i].name);
printf("\nEnter Students Branch:");
scanf("%s", p[i].branch);
printf("\nEnter Students Marks:");
scanf("%d", &p[i].total_marks);
}
for (i = 0; i < n; i++){
printf("\nStudent %d Detail", i + 1);
printf("\nName = %s", p[i].name);
printf("\nBranch = %s", p[i].branch);
printf("\nTotal marks = %d", p[i].total_marks);
}
return 0;
}
