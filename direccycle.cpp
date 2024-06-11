#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, unordered_map<int,vector<int>> &adj,unordered_map<int,bool> &vis,unordered_map<int,bool> &dfsvis)
{
    vis[node]=true;
    dfsvis[node]=true;

    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            if(dfs(it,adj,vis,dfsvis))
            {
                return true;
            }
        }
        else if(dfsvis[it])
        {
            return true;
        }
    }

    dfsvis[node]=false;
    return false;
}
int main()
{
     vector<vector<int>> v = {{0,2},{2,1},{1,4},{4,3},{2,3}};
     unordered_map<int,vector<int>> adj;
     unordered_map<int,bool> visited;
     unordered_map<int,bool> dfsvisited;

     for(int j=0;j<v.size();j++)
    {
        adj[v[j][0]].push_back(v[j][1]);
    }

    for(int i=0;i<5;i++)
    {
        if(!visited[i]){
        if(dfs(i,adj,visited,dfsvisited))
        {
            cout<<"cycle"<<endl;
        }

        }
    }
}
