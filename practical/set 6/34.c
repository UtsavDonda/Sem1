#include <stdio.h>

int main() {
int a[5],i;
int max=-32768;
printf("enter ten number");
for(i=0;i<=4;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
    if(a[i]>max)
    {max=a[i];}
}
printf("max number is: %d",max);
    return 0;
}
