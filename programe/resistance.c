#include<stdio.h>
float parallel(int b,float a[])
{
    float sum=0.0;
      for (int i = 0; i < b; i++)
      {
          sum= sum+(1.0/a[i]);
      }
      return sum; 
}
float series(int b,float a[])
{
    float sum=0.0;
      for (int i = 0; i < b; i++)
      {
          sum= sum+a[i];
      }
      return sum;
}

int main()
{

    int n, b;
    float sum = 0.0;
    
    printf("Enter how many resistor you want to add :-");
    scanf("%d",&n);
    float a[n+1];
    for (int i = 0; i <n; i++)
    {
        printf("Enter value of resitor %d :- ", i+1);
        scanf("%f",&a[i]);
    }
printf("Enter 1 for series connection and enter 2 for parallel connection :- ");
scanf("%d",&b);

switch (b)
{
case 1:
{
    printf("Total resistance of series circuit is :- %.3f\n", series(n,a)); 
}
    break;
case 2:
{
        printf("Total resistance of parallel circuit is :-%.3f", parallel(n,a));
}
}
    return 0;

}
