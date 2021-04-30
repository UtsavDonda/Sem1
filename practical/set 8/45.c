#include<stdio.h>
#include<conio.h>
float recursion(float n);
int main()
{
float x,ser=0,ser1=0,i,sum=0,z,n;
clrscr();

printf("\nEnter x:");
scanf("%f",&x);

printf("\nEnter n:");
scanf("%f",&n);

//To calculate positive part of series
for(i=1;i<=n;i+=4)
ser=ser+(x*i)/recursion(i);
//To calculate negative part of series
for(i=3;i<n;i+=4)
ser1=ser1+(x*i)/recursion(i);

//Sum of series
sum=ser-ser1;
//printf("%f",ser);
//To print series and it's sum
printf("\nSum of series = %.4f",sum);
getch();
}

//To calculate factorial of base value
float recursion(float n)
{
if (n>=1)
return n*recursion(n-1);
else
return 1;
}
