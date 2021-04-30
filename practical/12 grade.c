#include <stdio.h>
int main()
{
	float marks;
	printf("enter your marks :");
	scanf("%f",&marks);
	if(80<=marks && marks<=100)
	{
		printf("Distinction");
	}
	else if(60<=marks && marks<=79){printf("first class");}

	else if(40<=marks && marks<=59){printf("second class");}
	else {printf("faile");}
return 0;	
	}
