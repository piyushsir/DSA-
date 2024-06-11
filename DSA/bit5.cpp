#include<bits/stdc++.h>
using namespace std;
int main()
{
   /*int a=-7;
   cout<<a<<endl;
   cout<<bitset<32>(a)<<endl;
   int m=-1;
   a=m^(a-1);
   cout<<a<<endl;
   cout<<bitset<32>(a)<<endl;*/
  /* int a=45;
   int b=80;
   cout<<a<<endl;
   cout<<bitset<8>(a)<<endl;
   cout<<b<<endl;
   cout<<bitset<8>(b)<<endl;
   int c=a^b;
   int count=0;
   while(c)
   {
       if(c&1)
        count++;
       c>>=1;
   }
   cout<<count<<endl;*/
   int a=31;
   int k=1;
   while((a&(a-1)))
   {
       a=(a&(a-1));
   }
   cout<<(a<<1)<<endl;

}



