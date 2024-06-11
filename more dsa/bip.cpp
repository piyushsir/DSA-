#include<bits/stdc++.h>
using namespace std;

vector<bool> vis(5,0);
vector<int> av;
bool isavailable(vector<vector<int>> &g,int m,vector<bool> &vis,vector<int> &av)
{
    for(int i=0;i<g[i].size();i++)
    {
        if(g[m][i]==1 && vis[i]==0)
        {
            vis[i]=1;
            if(av[i]==-1 || isavailable(g,av[i],vis,av))
            {
                av[i]=m;
                return true;
            }
        }
    }
    return false;
}

int bipertite(vector<vector<int>> &g)
{
    int appli=g.size();
    int jobs=g[0].size();
    int ans=0;

    av.assign(5,-1);
   for(int i=0;i<3;i++)
    {

        cout<<endl;
        vis.assign(5,0);
        if(isavailable(g,i,vis,av))
        {
            ans++;
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> g
    {
      {1,1,0,1,1},{0,1,0,0,1},
       {1,1,0,1,1}
    };
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<bipertite(g)<<endl;;
    for(int i=0;i<5;i++)
    {
        cout<<av[i]<<" ";
    }
}
