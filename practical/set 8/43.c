#include<stdio.h>
int check(int num)
{
	int a,div,i,count=0;
	for(i=1;i<num;i++)
	{
		div=num%i;
		if(div==0)
		{count++;}
	}
	if(count==1)
	{return count;}
	else
	{
		return 0;
	}
	}
int main()
{
	int n,ans;
	printf("enter number");
	scanf("%d",&n);
	ans=check(n);
	printf("%d",ans);
	return 0;
	}
