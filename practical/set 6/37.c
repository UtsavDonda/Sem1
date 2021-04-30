#include <stdio.h>

int main() {
int i,j;
int a[2][3],b[2][3],c[2][3];
printf("enter first 2x3 metrix:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{  scanf("%d",&a[i][j]);}
}
printf("enter second 2x3 metrix:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{  scanf("%d",&b[i][j]);}

}

for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{  c[i][j]=a[i][j]+b[i][j];
}

}

for(i=0;i<2;i++){
{
for(j=0;j<3;j++){
printf ("%d ",c[i][j]);}
}
printf ("\n");
}
    return 0;
}
