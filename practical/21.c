#include <stdio.h>
int main()
{
	int i,n,a,sum=0,avg;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
		scanf("%d\n",&a);
 	sum=sum+a;
	avg=sum/n;
	}
printf ("sum is %d\n",sum);
printf ("avg is %d",avg);
	return 0;
	}
