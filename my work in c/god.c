#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>
#include<windows.h>
int dice,position,newposition,a;
int checkposition();
int count=0;
int main()
{
    system("color 1e");
    srand(time(NULL));
    printf("what would you like to do:\n1.read the rules\n2.play the game\nenter 1 for rules and 2 to play the game\nthank you sir\n");
    scanf("%d\n",&a);
    if(a==1)
    {
        printf("rules are simple :\nyou just had to press any key to roll the dice\none who reaches 100 in minimum no. of turns wins the game\n");
    }
    if (a==1,2)
    {   printf("welcome to piyush snake and ladders game\n ");
        printf("                                      \n\nsome important guidelines\n");
        printf("100 99 98 97 96 95 94 93 92 91  |   start=1          \n");
        printf("90 89 88 87 86 85 84 83 82 81   |   ladder=7    snake=12\n");
        printf("80 79 78 77 76 75 74 73 72 71   |   ladder=22   snake=19 \n");
        printf("70 69 68 67 66 65 64 63 62 61   |   ladder=26   snake=22\n");
        printf("60 59 58 57 56 55 54 53 52 51   |   ladder=48   snake=41\n");
        printf("50 49 48 47 46 45 44 43 42 41   |   ladder=70   snake=73\n");
        printf("40 39 38 37 36 35 34 33 32 31   |   ladder=80   snake=99\n");
        printf("30 29 28 27 26 25 24 23 22 21   |   ladder=90 \n");
        printf("20 19 18 17 16 15 14 13 12 11   |   ladder=30 \n");
        printf("10  9  8  7  6  5  4  3  2  1   |\n");
    }
    else
    {
        printf("invalid input by the user");
    }
    do
    {
        printf("\npress any key to roll the dice\n");
        dice-=(getche());
        dice=((rand()%6)+1);
        printf("you rolled a die");
        position+=dice;
        if(dice==6)
        {
            printf("wow you got 6 you have another chance to roll the dice");
            continue;
        }
        printf("you landed on %d\n",position);
        count++;
        checkposition();
        {
            position=newposition;
        }
    }
    while(position<100);
    {
        printf("you are a fucking winner with %d\n no. of turns",count);
    }
    getch();
    return 0;

}
checkposition()
{
    switch(position)
    {
        case 7:
                newposition=14;
                {
                    printf("damn it boy you just climbed a ladder now your new position will be %d\n",newposition);
                }
                 break;
        case 22:
                 newposition=40;
                 {
                     printf("damn it boy you just climbed a ladder now your new position will be %d\n",newposition);
                 }
                 break;
        case 26:
                 newposition=30;
                 {
                     printf("damn it boy you just climbed a ladder now your new position will be %d\n",newposition);
                 }
                 break;
        case 48:
                newposition=55;
                {
                   printf("damn it boy you just climbed a ladder now your new position will be %d\n",newposition);
                }
                break;
        case 70:
                newposition=99;
                {
                    printf("damn it boy you just climbed a ladder now your new position will be %d\n",newposition);
                }
                break;
        case 80:
                newposition=92;
                {
                   printf("damn it boy you just climbed a ladder now your new position will be %d\n",newposition);
                }
                break;
        case 90:
                newposition=94;
                {
                     printf("damn it boy you just climbed a ladder now your new position will be %d\n",newposition);
                }
                break;
        case 30:
                newposition=33;
                {
                     printf("damn it boy you just climbed a ladder now your new position will be %d\n",newposition);
                }
                break;
        case 12:
               newposition=6;
               {
                    printf("sorry sir unluckily you just step in a snake now your position is %d\n",newposition);
               }
               break;
        case 19:
               newposition=11;
               {
                  printf("sorry sir unluckily you just step in a snake now your position is %d\n",newposition);
               }
               break;
        case 23:
               newposition=18;
               {
                  printf("sorry sir unluckily you just step in a snake now your position is %d\n",newposition);
               }
               break;
        case 41:
                newposition=23;
                {
                    printf("sorry sir unluckily you just step in a snake now your position is %d\n",newposition);
                }
                break;
        case 99:
                newposition=9;
                {
                    printf("sorry sir unluckily you just step in a snake now your position is %d\n",newposition);
                }
                break;
        case 73:
                newposition=60;
                {
                    printf("sorry sir unluckily you just step in a snake now your position is %d\n",newposition);
                }
                break;
        default:
               return newposition=position;

    }
}



