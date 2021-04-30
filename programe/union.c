struct std
{
	char name[10];
	int roll;
	int marks;
};
int main()
{
struct std obj;
gets(obj.name);
 scanf("%d",&obj.roll);
scanf("%d",&obj.marks);

printf("\n%s",obj.name);
 printf("\n%d",obj.roll);
 printf("\n%d",obj.marks);
 return 0;
 }
