#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a=5;
   cout<<a<<endl;
   cout<<bitset<4>(a)<<endl;
   int k=2;
   a=a&(~(1<<k));
   cout<<a<<endl;
   cout<<bitset<4>(a)<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a=5;
   cout<<a<<endl;
   cout<<bitset<4>(a)<<endl;
   int k=1;
   a=a|((1<<k));
   cout<<a<<endl;
   cout<<bitset<4>(a)<<endl;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a=5;
   cout<<a<<endl;
   cout<<bitset<4>(a)<<endl;
   int k=1;
   bool b =a&((1<<k));
   cout<<b<<endl;
   if(b==1)
    cout<<"set"<<endl;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a=7;
   cout<<a<<endl;
   cout<<bitset<4>(a)<<endl;
   for(int i=0;i<4;i++)
   {
    a=a^((1<<i));
   }
   cout<<a<<endl;
   cout<<bitset<4>(a)<<endl;
}





