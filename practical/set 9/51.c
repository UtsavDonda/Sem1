#include <stdio.h>
struct time_struct
{
int hour;
int minute;
int second;
} t;
int main(void)
{
printf("\nEnter Hour:");
scanf("%d", &t.hour);
printf("\nEnter Minute:");
scanf("%d", &t.minute);
printf("\nEnter Second:");
scanf("%d", &t.second);
printf("\nTime %d:%d:%d", t.hour % 24, t.minute % 60, t.second % 60);
return 0;
}
