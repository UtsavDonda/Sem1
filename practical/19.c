#include <stdio.h>
int main()
{
	int i,f1=0,f2=1,f3,no;
	printf("enter number");
    scanf("%d\n",&no);
for(i=1;i<=no;i++)
{
	f3=f1+f2;
	f1=f2;
	f2=f3;
	printf("%d  ",f1);
}
	return 0;
	}

