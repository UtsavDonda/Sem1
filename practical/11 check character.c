#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
char val;



val = getchar();

if(isalpha(val) > 0)
{
	if(islower(val) > 0) 
{
		printf("\n\nEntered Value is Smaller Character");
	}
	
	else if(isupper(val)>0)
	{
		printf("\n\nEntered Value is Capital Character");
	}
}


else if(isdigit(val) > 0)
{
	printf("\n\nEntered value is Digit");
}
else
{
	printf("special character");
} 
return 0;
}
