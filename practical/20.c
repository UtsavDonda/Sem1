#include<stdio.h>

int main()
{
	int last,sum=0,rem,no;
	printf("enter number");
	scanf("%d",&no);
	last=no%10;
	while(no>0)
	{
	rem=no%10;
		no=no/10;
	}
	sum=rem+last;
	
	printf("%d",sum);
	
    return 0;
}
