#include<stdio.h>
int main()
{
    int i,max,min,num;
    for(i=1;i<=10;i++){
        printf("Enter Number %d : ",i);
        scanf("%d",&num);
        if(i==1){
            max=num;
            min=num;
        }
        else if(i>1 && num>max){
            max=num;
        }
        if(i>1 && num<min){
            min=num;
        }
    }
    printf("Max Number Is : %d\n",max);
    printf("Min Number Is : %d",min);
    return 0;
}
