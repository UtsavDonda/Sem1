#include <stdio.h>
int main()
{	int i,j;
	float  mark,sum;
	for(i=1;i<=5;i++)
	{ sum=0;
		printf("student :%d\n",i);
		for(j=1;j<=3;j++)
		{
   printf("enter mark of subject :%d\n",j);
	scanf("%f",&mark);
			sum=mark+sum;
			
		}
		printf("sum is :%f\n",sum);
		printf("average is :%f\n",sum/3);
	}
	return 0;
	}
