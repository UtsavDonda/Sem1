#include <stdio.h>
int main(void)
{
int i = 49;
int *p;
p = &i;
printf("\nAddress of Variable i = %u", p);
return 0;
}
