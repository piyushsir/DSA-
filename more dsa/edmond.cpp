#include<bits/stdc++.h>
using namespace std;
bool bfs(vector<vector<int>> &v,int s,int d,vector<int> &parent)
{
    vector<int> vis(v.size(),0);
    queue<int> q;
    q.push(s);
    vis[s]=1;
    parent[s]=-1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<v.size();i++)
        {
            if(v[u][i]>0 && vis[i]==0)
            {
                if(i==d)
                {
                    parent[i]=u;
                    return true;
                }
                q.push(i);
                parent[i]=u;
                vis[i]=1;
            }

        }

    }
    return false;
}
int edmond(vector<vector<int>> &v,int s,int d)
{
    int mxflow=0;
    vector<int> parent(v.size());
    while(bfs(v,s,d,parent))
    {
        int bt=INT_MAX;
        for(int i=d;i!=s;i=parent[i])
        {
            int f=parent[i];
            bt=min(bt,v[f][i]);
        }
        for(int i=d;i!=s;i=parent[i])
        {
            int f=parent[i];
            v[f][i]-=bt;
            v[i][f]+=bt;

        }
        mxflow+=bt;

    }
    return mxflow;
}
int main()
{
    vector<vector<int>> g(8,vector<int>(8,0));
    g[1][2]=3;
    g[1][3]=5;
    g[1][4]=8;
    g[2][3]=2;
    g[2][5]=1;
    g[2][6]=1;
    g[3][6]=3;
    g[4][6]=2;
    g[5][7]=7;
    g[6][5]=1;
    g[6][7]=4;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<edmond(g,1,7);
}
