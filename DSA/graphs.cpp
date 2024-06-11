#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> v,int s,vector<bool> &vec)
    {
        cout<<s<<endl;
        vec[s]=true;
        for(int i=0;i<v.size();i++)
        {

                if(vec[i]==false && v[s][i]==1)
                {
                    print(v,i,vec);
                    vec[i]=true;

                }
        }
    }
void print2(vector<vector<int>> v,int s,vector<bool> &check)
{
 queue<int> q;
 q.push(s);
 check[s]=true;
 while(!q.empty())
 {
     int c=q.front();
     q.pop();
     cout<<c<<endl;
     for(int i=0;i<v.size();i++)
     {
         if(!check[i] && v[c][i])
         {
             q.push(i);
             check[i]=true;
         }
     }
 }
}
void dfs(vector<vector<int>> v)
{
    vector<bool> vec(v.size(),false);
    for(int i=0;i<v.size();i++)
    {
        if(vec[i]==false)
        print(v,i,vec);

    }
}
void bfs(vector<vector<int>> v)
{
    vector<bool> vect(v.size(),false);
    for(int i=0;i<v.size();i++)
    {
        if(vect[i]==false)
        {
            print2(v,i,vect);
        }
    }
}
int connected(vector<vector<int>> v)
{
    int n=v.size();
    int count=0;
    vector<bool> vec(n,false);
    for(int i=0;i<n;i++)
    {
        if(vec[i]==false)
        {
            print(v,i,vec);
            count++;
        }
    }
    return count;
}
int main()
{
    int vertices,edges;
        cout<<"enter vectices"<<endl;
        cin>>vertices;
        cout<<"enter edges"<<endl;
        cin>>edges;
        vector<vector<int>> v(vertices,vector<int>(vertices+1,0));
        for(int i=1;i<=edges;i++)
        {
            int fv,sv;
            cin>>fv>>sv;
            v[fv][sv]=1;
            v[sv][fv]=1;
        }
        vector<bool> vec(v.size(),false);
    dfs(v);
    cout<<"bfs"<<endl;
    bfs(v);
    cout<<connected(v)<<endl;
}
