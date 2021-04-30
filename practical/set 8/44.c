#include <stdio.h>
int inter(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
return x;	
//	return y;
}

int main()
{
	int a,b,m,n,ans;
	printf("enter number of a:");
	scanf("%d",&a);
	printf("enter number of b:");
	scanf("%d",&b);
	m=inter(a,b);
	n=inter(b,a);
	
	printf("\nvalue of a is :%d",m);
	printf("\nvalue of b is :%d",n);
	return 0;
}
