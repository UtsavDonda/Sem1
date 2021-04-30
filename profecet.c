#include <stdio.h>
int main()
{
	int i,j,n,t,k,a[1000],count=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	 { scanf("%d %d",&n,&k);
	
	 	for(i=0;i<n;i++)
		{
	 	scanf("%d",&a[i]);
	 	if(a[i]<=0)
	 		{
	 		count++;
	 		}
		
		}
	
	 }
	if(k<=count)
	 	{
	 	printf("NO");
	 		}
	if(k>=count)
	 {
	 	 	printf("YES");
	 	}
	
	
	
	return 0;
}
