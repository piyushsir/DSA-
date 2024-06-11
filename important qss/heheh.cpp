#include<bits/stdc++.h>
using namespace std;
int x=32;
bool check(stack<char> s,queue<char> q,int n)
{
 while(n--)
   {
       if(s.top()!=q.front())
       {
           return false;
       }
   }
   return true;
}
int main()
{
   string s;
   cin>>s;
   stack<char> s2;
   queue<char> q;
   for(int i=0;i<s.size();i++)
   {
       s[i]=s[i]|x;
       s2.push(s[i]);
       q.push(s[i]);
   }
   if(check(s2,q,s.size()))
   {
       cout<<"palindrome"<<endl;
   }
   else
   {
       cout<<"no"<<endl;
   }


}
