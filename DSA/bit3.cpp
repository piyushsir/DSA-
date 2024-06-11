#include<bits/stdc++.h>
using namespace std;
int main()
{
  /*int a=14;
  cout<<a<<endl;
  cout<<bitset<4>(a)<<endl;
  int b=a&(a-1);
  cout<<b<<endl;
  cout<<bitset<4>(b);*/
  int a=4;
  cout<<a<<endl;

  cout<<bitset<8>(a)<<endl;
  cout<<bitset<8>(-a)<<endl;
   cout<<bitset<8>(a-1)<<endl;

  /*if((a&-a)==a)
    cout<<"yes"<<endl;

  if(a&1)
    cout<<0;
  else{
    cout<<log2(a^(a&(a-1)))<<endl;
  }*/
 /* int count=0;
  while(a)
  {
      if(a&1)
      {
        count++;
        a=(a&(a-1));
      }
      a>>=1;
  }
  cout<<count<<endl;


  cout<<bitset<25>((1<<32)-1)<<endl;
  if(__builtin_popcount(14)==1)
  {
      cout<<"even"<<endl;
  }*/

}


