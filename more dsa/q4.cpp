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
        for(int i=0;i<8;i++)
        {
            if(v[u][i]==1 && vis[i]==0)
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
        for(int i=d;i!=s;i=parent[i])
        {
            int f=parent[i];
            v[f][i]-=1;
            v[i][f]+=1;

        }
        mxflow+=1;

    }
    return mxflow;
}
int main()
{
    vector<vector<int>> g(8,vector<int>(8,0));
    g[0][1]=1;
    g[0][2]=1;
    g[0][3]=1;
    g[1][2]=1;
    g[2][3]=1;
    g[2][6]=1;
    g[3][6]=1;
    g[4][2]=1;
    g[4][7]=1;
    g[5][1]=1;
    g[5][7]=1;
    g[5][4]=1;
    g[6][5]=1;
    g[6][7]=1;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<edmond(g,0,7);
}
