#include<bits/stdc++.h>
using namespace std;
int dfs(int st,vector<vector<int>> v,vector<int> vis,int count,queue<int> &s)
{
    if(count==4)
    {

        return 1;
    }

    vis[st]=1;
    count++;
    for(int i=1;i<=4;i++)
    {
        if(v[st][i]==1 && vis[i]!=1)
        {
            s.push(i);
            if(dfs(i,v,vis,count,s))
                return 1;
        }
    }
    return 0;
}
int main()
{
    int n=4;
    int m=4;
    vector<vector<int>> an(5,vector<int>(5,0));
    an[1][2]=1;
    an[2][1]=1;
    an[2][3]=1;
    an[3][2]=1;
    an[3][4]=1;
    an[4][3]=1;
    an[2][4]=1;
    an[4][2]=1;

  for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<an[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> vis(n+1,0);
    for(int i=0;i<=4;i++)
    {
        cout<<vis[i]<<" ";
    }
    cout<<endl;
    int f=0;
    int cnt=1;
    queue<int> ans;
    int store;
    for(int i=1;i<=4;i++)
    {
        if(dfs(i,an,vis,cnt,ans)==1)
        {
            f=1;
            store=i;
            break;
        }
    }
    cout<<endl;
    int np=3;
    if(f)
    {
        cout<<store<<" ";
        while(np--)
        {
             cout<<ans.front()<<" ";
             ans.pop();
        }
        cout<<endl;
        cout<<1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
