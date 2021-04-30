#include <stdio.h>
int main()
{
	float a,b,c;
	printf("enter number of a:");
	scanf("%f",&a);
	printf("enter number of b:");
	scanf("%f",&b);
    printf("enter number of c:");
	scanf("%f",&c);
	if(a>=b)
	{
		if(a>=c)
	   {
		printf("max number is %f",a);
     	}
	}
	if(b>a)
	{
		if(b>=c)
	  {
		printf("max number is %f",b);
	  }
	}
	if(c>b)
	{
			if(c>a)
      	{
		printf("max number is %f",c);
    	}
    }

return 0;	
	}
