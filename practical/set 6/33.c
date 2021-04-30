#include <stdio.h>
int main(){
int i,a[10];
printf("enter ten number\n");
for(i=0;i<=9;i++)
{
    scanf("%d",&a[i]);
}
printf("even number is:");
for(i=0;i<=9;i++)
{
if(a[i]%2==0)
{
printf("%d ",a[i]);
 }
}
printf("\nodd number is:");
for(i=0;i<=9;i++)
{
if(a[i]%2==1)
{
printf("%d ",a[i]);
 }
}

    return 0;
}
