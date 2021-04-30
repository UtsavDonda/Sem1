#include <stdio.h>
int main()
{
	float basic,Da,Hra,Ma=300,Nt,Gross,Pf;
	printf("enter number of basic : ");
	scanf("%f",&basic);
 Da = 0.1*basic;
Hra = 0.0750*basic;
Pf = 0.1250*basic; 
 Gross = basic + Da + Hra + Ma;
 Nt = Gross-Pf;
 printf("ans is : %f",Nt);
 
return 0;	
	}
