#include <stdio.h>
int main()
{	int px[50],py[50],qx[50],qy[50],rx[50],ry[50];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 { 
		scanf("%d %d %d %d",&px[i],&py[i],&qx[i],&qy[i]);
	 }
	for(i=0;i<n;i++)
	{
		rx[i]=2*qx[i]-px[i];
		ry[i]=2*qy[i]-py[i];
		printf("%d %d\n",rx[i],ry[i]);
	}
	
	
	
	
	return 0;
}
