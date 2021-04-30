#include<stdio.h>  
int a[3][2],b[2][3],mul[3][3],i,j,k;
int main(){  

printf("enter the first matrix element=\n");    
for(i=0;i<3;i++)    
{    
for(j=0;j<2;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix element=\n");    
for(i=0;i<2;i++)    
{    
for(j=0;j<3;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("multiply of the matrix:\n");    
for(i=0;i<3;i++)    
{    
for(j=0;j<3;j++)    
{    
mul[i][j]=0;    
for(k=0;k<2;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<3;i++)    
{    
for(j=0;j<3;j++)    
{    
printf("%d ",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  
