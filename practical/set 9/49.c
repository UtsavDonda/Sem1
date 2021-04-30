#include <stdio.h>
struct book{
    int id;
    char name[20];
    float price;
    };
    
main(void) {
struct book b1;
printf("\nenter book id:");
scanf("%d",&b1.id);
fflush(stdin);
printf("\nenter book name:");
scanf("%[^\n]s",&b1.name);
printf("\nenter book price:");
scanf("%f",&b1.price);


printf("\nbook id =%d",b1.id);
printf("\nbook name =%s",b1.name);
printf("\nbook price =%.2f",b1.price);


    return 0;
}
