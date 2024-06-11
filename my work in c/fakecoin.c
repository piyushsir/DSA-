#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,s1,s2;
    printf("enter the weight of 8 coins");
    scanf("%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8);
    s1=a1+a2+a3;
    s2=a4+a5+a6;
    if(s1==s2)
    {
        if(a7==a8)
            printf("no coin is fake\n");
        else if(a7>a8&&a7!=a6)
            printf("a7 is fake\n");
        else if(a8>a7&&a8==a6)
            printf("a7 is fake\n");
        else
            printf("a8 is fake\n");
    }
     else if(s1/3==a7)
    {
        printf("fake coin is among a4,a5,a6\n");
        if(a4==a5)
            printf("fake coin is a6");
        else if(a5==a6)
            printf("fake is a4");
        else
            printf("fake is a5");
    }
     else if (s2/3==a7)
     {
         printf("fake coin is among a1,a2,a3\n");
         if(a1==a2)
            printf("a3 is fake coin");
         else if(a2==a3)
            printf("a1 is fake coin");
         else
            printf("a2 is fake coin");

     }
     return 0;

}
