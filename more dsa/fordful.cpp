#include<bits/stdc++.h>
using namespace std;
bool bfs(vector<vector<int>> &rGraph, int s, int t, vector<int> &parent)
{


    bool visited[6];
    memset(visited, 0, sizeof(visited));

    stack<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while (!q.empty()) {
        int u = q.top();
        q.pop();

        for (int v = 0; v < 6; v++) {
            if (visited[v] == false && rGraph[u][v] > 0) {
                if (v == t) {
                    parent[v] = u;
                    return true;
                }
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }

    return false;
}
int edmond(vector<vector<int>> v,int s,int d)
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
    int n=6;
    vector<vector<int>> gp(n,vector<int>(n,0));
    gp[0][1]=11;
    gp[1][3]=12;
    gp[3][5]=19;
    gp[0][2]=12;
    gp[2][4]=11;
    gp[4][5]=4;
    gp[2][1]=1;
    gp[4][3]=7;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<gp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<edmond(gp,0,5);
}
