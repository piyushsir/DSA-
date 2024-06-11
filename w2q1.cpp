#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void recur(int n,int cnto,int cntc,string s,int i)
{

    if(n==0)
    {
        return;
    }
    if(i>2*n-1)
    {
        ans.push_back(s);
        s="";
        return;
    }

    if(cnto<n)
    {
        recur(n,cnto+1,cntc,s+'(',i+1);
    }

    if(cnto>cntc)
    {
        recur(n,cnto,cntc+1,s+')',i+1);
    }

    return;

}
int main()
{
   int n=8;
   int cnto=0;
   int cntc=0;
   string s="";
   int i=0;
   recur(n,cnto,cntc,s,i);

   for(int i=0;i<ans.size();i++)
   {
       cout<<ans[i]<<endl;
   }
}
