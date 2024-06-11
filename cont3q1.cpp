#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int a=1;
       int b = 2;
       int c = n-3;
       if(c%3==0)
       {
           c=c-2;
           b=b+2;
       }
       if(n<7)
       {
           cout<<"NO"<<endl;
       }
       else
       {
       if(b==c)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
           cout<<a<<" "<<b<<" "<<c<<endl;
       }
       }

   }
}
