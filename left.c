#include <stdio.h>
int main()
{
	int i,j,n,t,k,d,a[10000],count=0;
	scanf("%d %d",&n,&d);
	
	
	for(i=0;i<n;i++)
	 { 
	 	scanf("%d",&a[i]);
	 }
	 
	 for(i=0;i<n;i++)
	 { 
	 if(i>0)
	 {
	 	a[i]=a[i-1];
	 }
	 if(i==0)
	 {
	 	a[i]=a[i+n];
	 }
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("%d ",a[i]);
	 }
	 
	return 0;
}
