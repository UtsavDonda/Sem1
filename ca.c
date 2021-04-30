#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void draw_objects(int boxx, int boxy, int candyx, int candyy)
{
    gotoxy(boxx - 2, boxy);
    cprintf("#");
    gotoxy(boxx + 2, boxy);
    cprintf("#");
    gotoxy(boxx - 2, boxy + 1);
    cprintf("#####");
    gotoxy(candyx, candyy);
    cprintf("0");
    gotoxy(67, 5);
}
void player_stats(int gems, int score, int lives, int target, int high)
{
    gotoxy(67, 5);
    textcolor(RED);
    cprintf("gems:-%d", gems);
    gotoxy(67, 8);
    cprintf("score:-%d", score);
    gotoxy(67, 10);
    cprintf("lives:-%d", lives);
    gotoxy(67, 11);
    cprintf("target:-%d", target);
    gotoxy(67, 13);
    cprintf("high:-%d", high);
}
void welcome_screen(void)
{
    textbackground(BLUE);
    textcolor(RED);
    gotoxy(32, 13);
    cprintf("CREATED BY:-");
    gotoxy(32, 14);
    cprintf("BIT026 Vyas Manav");
    gotoxy(32, 15);
    cprintf("BIT002 Harsh Patel");
    gotoxy(32, 16);
    cprintf("BIT021 Anjan Aghera");
    //delay(2000);
    getch();
}
void game_start(int *target, int high, int gems)
{
    textbackground(BROWN);
    textcolor(RED);
    gotoxy(35, 12);
    cprintf("ARE YOU READY?");
    gotoxy(36, 13);
    cprintf("3");
    delay(1000);
    gotoxy(40, 13);
    cprintf("2");
    delay(1000);
    gotoxy(44, 13);
    cprintf("1");
    delay(1000);
    gotoxy(38, 14);
    cprintf("START....");
    sound(2000);
    delay(200);
    nosound();
    delay(1000);
    clrscr();
    textbackground(BLUE);
    textcolor(RED);
    srand(time(0));
    *target = rand() % 9 + 1;
    gotoxy(35, 12);
    cprintf("TARGET:-%d", *target);
    gotoxy(35, 13);
    cprintf("Highest:-%d", high);
    gotoxy(35, 14);
    cprintf("Gems:-%d", gems);
}
void wining(void)
{
    clrscr();
    textbackground(BROWN);
    textcolor(BLUE);
    gotoxy(35, 12);
    cprintf("YOU WIN!!!");
    sound(5000);
    delay(5000);
    nosound();
    getch();
}
void wanna_use_gems(int gems)
{
    clrscr();
    textbackground(BROWN);
    textcolor(RED);
    sound(200);
    delay(200);
    nosound();
    gotoxy(35, 12);
    cprintf("gems:-%d", gems);
    gotoxy(30, 13);
    cprintf("Use 10 gem and continue the game with 3 lives?");
    gotoxy(35, 14);
    cprintf("Y/N");
}
void game_over(void)
{
    clrscr();
    gotoxy(31, 12);
    cprintf("--->GAME OVER!");
    gotoxy(31, 13);
    cprintf("--->better luck next time");
    gotoxy(35, 15);
    cprintf("Mainly Designed By:-");
    gotoxy(35, 16);
    cprintf("MANAV VYAS");
    gotoxy(35, 18);
    cprintf("Press any key to exit");
}
void main()
{
    FILE *fptr;
    FILE *fgem;
    FILE *fname;
    int boxx = 40, boxy = 24, candyx, candyy = 1;
    int score = 0, lives = 3, d, target, high = 0, gems = 20;
    int paused;
    char ch;
    char x;
    char c, name[20];
    clrscr();
    welcome_screen();
y:
    clrscr();
    textbackground(BLUE);
    textcolor(RED);
    gotoxy(30, 13);
    cprintf("Are you ready to start game?Y/N");
    x = getch();
    if (x == 121)
    {
    z:
        clrscr();
        textbackground(BLUE);
        textcolor(RED);
        fgem = fopen("c:\\gems.txt", "r");
        fscanf(fgem, "%d", &gems);
        fclose(fgem);
        fptr = fopen("c:\\candy_high.txt", "r");
        fscanf(fptr, "%d\n", &high);
        fclose(fptr);
        gotoxy(70, 2);
        cprintf("GEMS:-%d", gems);
        //gotoxy(1,24);
        //cprintf("sho(p)");
        gotoxy(70, 24);
        cprintf("(S)tart");
        gotoxy(32, 11);
        cprintf("HIGH_SCORE:-%d", high);
        x = getch();
        if (x == 115)
        {
            fptr = fopen("c:\\candy_high.txt", "r");
            fscanf(fptr, "%d", &high);
            fclose(fptr);
            fgem = fopen("c:\\gems.txt", "r");
            fscanf(fgem, "%d", &gems);
            fclose(fgem);
            candyx = rand() % 15 + 30;
            clrscr();
            game_start(&target, high, gems);
            delay(3000);
        start:
            clrscr();
            textcolor(GREEN);
            draw_objects(boxx, boxy, candyx, candyy);
            player_stats(gems, score, lives, target, high);
            if (kbhit())
            {
                ch = getch();
                switch (ch)
                {
                case 'a':
                    boxx--;
                    break;
                case 'd':
                    boxx++;
                    break;
                case 'x':
                    exit(0);
                } //end of switch
                if (ch == 77)
                {
                    boxx++;
                } //end of ch==77
                else if (ch == 75)
                {
                    boxx--;
                } //end of ch==75
                else if (ch == 'p')
                {
                    int i = 3;
                    paused = 1;
                    while (paused == 1)
                    {
                        clrscr();
                        gotoxy(35, 10);
                        cprintf("Game is Paused.");
                        gotoxy(35, 24);
                        cprintf("Press any key to resume game.");
                        getch();
                        while (i > 0)
                        {
                            gotoxy(40, 23);
                            cprintf("%d", i);
                            delay(1000);
                            i--;
                        }
                        paused = 0;
                    }
                }
            } //end of kbhit
            candyy++;
            if (candyy == 24)
            {
                d = boxx - candyx;
                if (d == 0 || d == -1 || d == 1 || d == 2 || d == -2)
                {
                    score++;
                    sound(220);
                    delay(100);
                    nosound();
                    if (score >= high)
                    {
                        high = score;
                        fptr = fopen("c:\\candy_high.txt", "w");
                        fprintf(fptr, "%d\n", high);
                        fclose(fptr);
                    } //end of score>=high
                    if (score == target)
                    {
                        wining();
                        exit(0);
                    } //end of score==target
                }     //end of d==0|| d==-1 etc
                else
                {
                    lives--;
                    sound(1500);
                    delay(100);
                    nosound();
                    if (lives == 0)
                    {
                        char command;
                        wanna_use_gems(gems);
                    ask:
                        command = getch();
                        if (command == 110)
                        {
                        back:
                            game_over();
                            getch();
                            goto z;
                        } //end of command ==110 for n in gems purchase
                        else if (command == 121)
                        {
                            if (gems < 10)
                            {
                                int i = 1;
                                while (i <= 3)
                                {
                                    clrscr();
                                    gotoxy(40, 13);
                                    cprintf("Not enough gems");
                                    gotoxy(40, 14);
                                    cprintf("%d", i);
                                    delay(1000);
                                    i++;
                                } //end of while i<=3
                                goto back;
                            } //end of if gems<10
                            else
                            {
                                gems = gems - 10;
                                lives = 3;
                                fgem = fopen("c:\\gems.txt", "w");
                                fprintf(fgem, "%d\n", gems);
                                fclose(fgem);
                            } //end of else for gems purchase and restart game
                        }     // end of command ==121 for y in gems purchase
                        else
                        {
                            clrscr();
                            textbackground(BROWN);
                            textcolor(RED);
                            gotoxy(40, 13);
                            cprintf("Type only Y/N not any other");
                            goto ask;
                        } //end of else for type else than Y/N
                    }     //ends of life =0
                }         //end of else state to not touch the candy
                candyy = 1;
                candyx = rand() % 15 + 30;
            } //end of box not touching candy
            delay(200);
            goto start;
        } //end of home menu start code
        else if (x == 101)
        {
            clrscr();
            welcome_screen();
            exit(0);
        } //end of exit code in home menu
        /* else
         {
             clrscr();
             textbackground(BROWN);
             textcolor(RED);
             gotoxy(40,13);
             cprintf("work is in progress press ");
             delay(500);
             goto z;
         }//end of any other command up
        }//end of typed y in first ask in game
        else if(x==110)
        {
         clrscr();
         textbackground(BROWN);
         textcolor(RED);
         gotoxy(40,13);
         cprintf("work is in progress press ");
         delay(500);
         goto y;
        }//end of typing n in first ask*/
        else
        {
            exit(0);
        } //end of else typig another than Y/N for exit
    }
} //end  main
