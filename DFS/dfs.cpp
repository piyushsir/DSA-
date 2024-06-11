#include<bits/stdc++.h>
using namespace std;
void recurdfs(vector<vector<int>> g,vector<bool> &vis,int v)
{
    vis[v]=1;
    cout<<v<<" ";

    for(int i=0;i<4;i++)
    {
        if(g[v][i]==1 && vis[i]==0)
        {

            recurdfs(g,vis,i);
        }
    }
}
void iterdfs(vector<vector<int>> g,vector<bool> &vis,int v)
{
    stack<int> s;
    s.push(v);
    while(!s.empty())
    {
        int tmp=s.top();
        s.pop();
        if(vis[tmp])
        {
            continue;
        }
        vis[tmp]=1;
        cout<<tmp<<" ";
        for(int i=0;i<4;i++)
        {
            if(vis[i]==0 && g[tmp][i])
            {
                s.push(i);
            }
        }
    }
}
int main()
{
    vector<vector<int>> graph(4,vector<int>(4,0));
    graph[0][1]=1;
    graph[1][0]=1;
    graph[1][2]=1;
    graph[2][1]=1;
    graph[2][3]=1;
    graph[3][2]=1;
    graph[3][1]=1;
    graph[1][3]=1;
    int v=0;
    vector<bool> vis(4,0);
    recurdfs(graph,vis,v);
    cout<<endl;
    vector<bool> vis2(4,0);
    cout<<endl;
    iterdfs(graph,vis2,v);
}
