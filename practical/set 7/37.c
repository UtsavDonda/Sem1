#include <stdio.h>

int main() {
char s[20];
int no,i,flag=0;
 gets(s);
 printf("you enter sting is:%s",s);
for(i=0;i<20;i++)
{ if(s[i]=='\0')
 {
break;
 }
 else{
     flag=flag+1;
 }
 }
 printf("\n charectar is:%d",flag);
   return 0;
}
