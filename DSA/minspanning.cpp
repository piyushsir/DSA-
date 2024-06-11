#include<bits/stdc++.h>
using namespace std;
void makeset(int n,int parent[])
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
    }
}
int finda(int parent[],int i)
{
    while(parent[i]!=i)
    {
        i=parent[i];
    }
    return i;
}
bool cmp(vector<int> a,vector<int> b)
{
    return a[2]<b[2];
}
int main()
{
    int n;
    cin>>n;
    int parent[n+1];
    makeset(n,parent);
    vector<vector<int>> v;
    for(int i=0;i<=n;i++)
    {
      int a,b,c;
      cin>>a>>b>>c;
      vector<int> in;
      in.push_back(a);
      in.push_back(b);
      in.push_back(c);
      v.push_back(in);
    }
    int cost=0;
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++)
    {
        int s=v[i][0];
        int d=v[i][1];
        int rs=finda(parent,s);
        int rd=finda(parent,d);
        if(rs!=rd)
        {
            cost=cost+v[i][2];
            parent[rd]=rs;
        }
    }
    cout<<cost<<endl;
}
/*
1 2 1
2 3 4
1 4 3
4 3 2
1 3 10*/
