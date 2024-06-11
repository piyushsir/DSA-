#include<bits/stdc++.h>
using namespace std;
bool sol(int target_sum,set<vector<int>> &s,vector<int> req,int sum,vector<int> v,int i,queue<int> q)
{

    if(target_sum==sum)
    {
        while(!q.empty())
        {
            v.push_back(q.front());
            q.pop();
        }
        s.insert(v);
        v.clear();
        //sum=0;
        //i=0;
        return true;
    }
    if(sum>target_sum || i>=req.size())
    {
        return false;
    }
    if(sol(target_sum,s,req,sum+(req[i]*req[i]),v,i+1,q))
    {
       q.push(i+1);
    }
    if(sol(target_sum,s,req,sum,v,i+1,q))
    {
        q.push(i+1);
    }


}
int main()
{
 int n=200;
 set<vector<int>> s;
 int help=sqrt(n);
 vector<int> v;
 vector<int> req(help);
 for(int i=0;i<help;i++)
 {
     req[i]=i+1;
 }
 queue<int> q;
 sol(n,s,req,0,v,0,q);
 for(auto it:s)
 {
     for(auto ite:it)
     {
         cout<<ite<<" ";
     }
     cout<<endl;
 }
}
