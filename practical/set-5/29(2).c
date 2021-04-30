#include <stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;5-i>=j;j++)
		{ printf(" "); }
			for(k=1;k<=i;k++)
			{printf("* ");	}
		printf("\n");
	}
	
return 0;
}
