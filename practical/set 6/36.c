#include <stdio.h>
int main() {
int a[5],tem,cnt,i;
printf("enter 5 number\n");
for(i=0;i<=4;i++)
{
   scanf("%d",&a[i]);
}
while(cnt<5)
{
for(i=0;i<4;i++)
{
    if(a[i]>a[i+1])
    {
    tem=a[i];
    a[i]=a[i+1];
    a[i+1]=tem;
    
    }
cnt++;
}

}
for(i=0;i<=4;i++)
{
    printf("%d\n",a[i]);
}
    return 0;
}
