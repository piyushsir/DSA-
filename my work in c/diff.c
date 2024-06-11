#include<stdio.h>
#include<string.h>
int main()
{
    int e,d=0;
    char a[20],b[20],c[20],str[5];
    printf("enter string 1 : \n");
    gets(a);
    printf("enter string 2 : \n");
    gets(b);
    str[0]='a';
    for( int k=0;a[k]!=0;k++)
        {

            if(a[k]=='a'||a[k]=='A')
            {
                ++d;
            }
            if(d==2)
            {
                break;
            }
             c[k]=a[k];
        }
        e=strlen(c);
        c[e]=str[0];
    int len=strlen(c);

   if(d>=2)
   {
            printf("here the frequency of a is more than one \n");
            for(int j=0;b[j]!=NULL;j++,len++)
            {
                c[len]=b[j];
            }
            puts(c);
   }
   else
   {
       printf("less than two a in the string ");
       int s=strlen(a);
       char f=a[s-1];
       int g=s-1;
       for(int j=0;b[j]!=NULL;j++,g++)
       {
           a[g]=b[j];
       }
       int h=strlen(a);
       a[h]=f;
       puts(a);
   }




    return 0;

}


