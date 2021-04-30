//Code For Rock,Paper,Scissor Game
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,i,p1,p2,p=0;
	int ps1=0,ps2=0;
	char c,name[20],name2[20];
	clrscr();
	srand(time(0));
	printf("Welcome To Rock,Paper,Scissor......\n\n");
	printf("------------------------------------ RULES -------------------------------------\n");
	printf("Rock Vs Paper --> Paper Wins\n");
	printf("Paper Vs Scissor --> Scissor Wins\n");
	printf("Scissor Vs Rock --> Rock Wins\n\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("To Play Against Computer Press c......\n\n");
	printf("To Play Against Player 2 Press p......\n\n");
	printf("--------------------------------------------------------------------------------\n");
	scanf("%c",&c);
	if(c=='c')
	{
		p=1;
		clrscr();
		printf("Enter Your Name :: ");
		scanf("%s",name);
		printf("\n\nEnter The Number Of Round You Want To Play :: ");
		scanf("%d",&n);
		clrscr();
		printf("Choose 1 For rock, 2 For Paper And 3 For Scissor\n\n");
		for(i=0;i<n;i++)
		{
			// For Player
			printf("\n%s's Turn :: ",name);
			scanf("%d",&p1);

			// For Computer
			p2=rand()%3+1;
			printf("\nComputer's Turn :: %d\n\n",p2);

			if(p1==1 && p2==2)
			{
				ps2++;
			}
			if(p1==2 && p2==1)
			{
				ps1++;
			}
			if(p1==3 && p2==1)
			{
				ps2++;
			}
			if(p1==1 && p2==3)
			{
				ps1++;
			}
			if(p1==2 && p2==3)
			{
				ps2++;
			}
			if(p1==3 && p2==2)
			{
				ps1++;
			}
			if(p1==p2)
			{

			}
		}
		printf("%s Scores :: %d\n",name,	ps1);
		printf("Computer Scores :: %d\n",ps2);
	}
	if(c=='c')
	{
		p=1;
		if(ps1>ps2)
		{
			printf("\n\nCongratulations......\n%s Is The Winner...",name);
		}
		else if(ps1==ps2)
		{
			printf("\n\nThe Match Is Tied......");
		}
		else
		{
			printf("\n\nComputer Is The Winner");
		}
	}
	if(c=='p')
	{
		p=1;
		clrscr();
		printf("Enter Player1's Name :: ");
		scanf("%s",name);
		printf("\Enter Player2's Name :: ");
		scanf("%s",name2);
		printf("\n\nEnter The Number Of Round You Want To Play :: ");
		scanf("%d",&n);
		clrscr();
		printf("Choose 1 For rock, 2 For Paper And 3 For Scissor\n\n");
		for(i=0;i<n;i++)
		{
			// For Player1
			printf("\n%s's Turn :: ",name);
			scanf("%d",&p1);

			//For Player2
			printf("\n%s's Turn :: ",name2);
			scanf("%d",&p2);
			printf("\n");

			if(p1==1 && p2==2)
			{
				ps2++;
			}
			if(p1==2 && p2==1)
			{
				ps1++;
			}
			if(p1==3 && p2==1)
			{
				ps2++;
			}
			if(p1==1 && p2==3)
			{
				ps1++;
			}
			if(p1==2 && p2==3)
			{
				ps2++;
			}
			if(p1==3 && p2==2)
			{
				ps1++;
			}
			if(p1==p2)
			{

			}
		}
	printf("%s Scores :: %d\n",name,ps1);
	printf("%s Scores :: %dh",name2,ps2);
	}
	if(c=='p')
	{
		p=1;
		if(ps1>ps2)
		{
			printf("\n\nCongratulations......\n%s Is The Winner...",name);
		}
		else if(ps1==ps2)
		{
			printf("\n\nThe Match Is Tied......");
		}
		else
		{
			printf("\n\nCongratulations......\n%s Is The Winner...",name2);
		}
	}
	if(p==0)
	{
		printf("\nPlease Enter A Valid Character.....");
	}
	getch();
}
