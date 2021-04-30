#include <stdio.h>

int main() {
int a[20],b[20];
int i,j;
printf("enter your roll number and your marks\n");
for(i=0;i<=19;i++)
{
    scanf("%d %d",&a[i],&b[i]);
    
}
for(i=0;i<=19;i++)
{
printf("roll: %d and marks: %d \n",a[i],b[i]);
}
    return 0;
}
