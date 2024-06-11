#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <MMsystem.h>
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
void dashboard();
int checkwin();
int main()
{
    int player=1,i,choice;
    char mark;
    do
    {
      dashboard();
      player=(player%2)?1:2;
      printf("player %d please enter your choice",player);
      scanf("%d",&choice);
      mark=(player==1)?'X':'O';
      if(choice==1 && a[1]=='1')
            return a[1]=mark;
      else if(choice==2 && a[2]=='2')
            return a[2]=mark;
      else if(choice==3 && a[3]=='3')
            return a[2]=mark;
      else if(choice==4 && a[4]=='4')
            return a[4]=mark;
      else if(choice==5 && a[5]=='5')
            return a[5]=mark;
      else if(choice==6 && a[6]=='6')
            return a[6]=mark;
      else if(choice==7 && a[7]=='7')
            return a[7]=mark;
      else if(choice==8 && a[8]=='8')
            return a[8]=mark;
      else if(choice==9 && a[9]=='9')
            return a[9]=mark;
      else
      {
          printf("invalid input by the user");
          player--;
          getch();
      }
      i=checkwin();
      player++;

      }
      while(i==-1)
      dashboard();
      if(i==1)
      {
          printf("winner is %d",--player);
      }
      else
      {
          printf("game drawn");
      }
      getch();
      return 0;
}
int checkwin()
{
    if(a[1]==a[2]&&a[2]==a[3])
        return 1;
    else if(a[4]==a[5]&&a[5]==a[6])
        return 1;
    else if(a[7]==a[8]&&a[8]==a[9])
        return 1;
    else if(a[1]==a[4]&&a[4]==a[7])
        return 1;
    else if(a[2]==a[5]&&a[5]==a[8])
        return 1;
    else if(a[3]==a[6]&&a[6]==a[9])
        return 1;
    else if(a[1]==a[5]&&a[5]==a[9])
        return 1;
    else if(a[3]==a[5]&&a[5]==a[7])
        return 1;
    else if( a[1]!='1'&& a[2]!='2'&& a[3]!='3'&& a[4]!='4'&& a[5]!='5'&& a[6]!='6'&& a[7]!='7'&& a[8]!='8'&& a[9]!='9')
        return 0;
    else
        return -1;
}
void dashboard()
{
  system("cls");
  printf("\n\nwelcome to piyush tik tak toe game \n\n");
  printf("player 1 - X\n player 2-O\n");
  printf("    |    |    \n");
  printf("%c  |%c  |%c   \n",a[1],a[2],a[3]);
  printf("____|____|____\n");
  printf("    |    |    \n");
  printf("%c  |%c |%c   \n",a[4],a[5],a[6]);
  printf("____|____|____\n");
  printf("    |    |    \n")
  printf("%c  |%c  |%c   \n",a[7],a[8],a[9]);


}


}
