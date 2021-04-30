#include <stdio.h>
int main(void)
{
char str[50];
char *ch;
printf("\nEnter String:");
scanf("%s", str);
ch = &str[0];
while (*ch != '\0')
{
printf("\nPosition : %u Character : %c", ch, *ch);
ch++;
}
return 0;
}
