#include<stdio.h>
int add(int num)
{
	int i,sum=0;
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	return sum;
	}
int main()
{
	int n,ans;
	printf("enter number");
	scanf("%d",&n);
	ans=add(n);
	printf("sum is :%d",ans);
	return 0;
}
