#include<bits/stdc++.h>
using namespace std;
//replace all 0 by 1 which are surrounded by 1's
int row[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int col[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
bool isvalid(int i,int j)
{
    return (i>=0 && i<10 && j>=0 && j<10);
}
void dfs(vector<vector<int>> &v,vector<vector<int>> &ans,int i,int j)
{
 ans[i][j]=-99;

 for(int k=0;k<8;k++)
 {
     int ni=i+row[k];
     int nj=j+col[k];
     if(isvalid(ni,nj) && v[ni][nj]==0 && ans[ni][nj]==0)
     {
         dfs(v,ans,ni,nj);
     }
 }

}
void change(vector<vector<int>> &v,vector<vector<int>> &ans)
{
    int r=v.size();
    int c=v[0].size();
    for(int i=0;i<c;i++)
    {
        if(v[0][i]==0 && ans[0][i]==0)
        {
            dfs(v,ans,0,i);
        }
        if(v[r-1][i]==0 && ans[r-1][i]==0)
        {
            dfs(v,ans,r-1,i);
        }
    }

    for(int i=0;i<r;i++)
    {
        if(v[i][0]==0 && ans[i][0]==0)
        {
            dfs(v,ans,i,0);
        }
        if(v[i][r-1]==0 && ans[i][r-1]==0)
        {
            dfs(v,ans,i,r-1);
        }
    }

}
int main()
{
    vector<vector<int>> v=
    {
        { 1, 1, 1, 1, 0, 0, 1, 1, 0, 1 },
        { 1, 0, 0, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 0, 0, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 0, 1, 1, 0, 1 },
        { 0, 0, 1, 1, 0, 0, 0, 1, 0, 1 },
        { 1, 0, 0, 1, 1, 0, 1, 1, 0, 0 },
        { 1, 1, 0, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 1, 0, 0, 1, 0, 1 },
        { 1, 1, 1, 0, 1, 0, 1, 0, 0, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }
    };
    vector<vector<int>> ans=
    {
     { 1, 1, 1, 1, 0, 0, 1, 1, 0, 1 },
        { 1, 0, 0, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 0, 0, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 0, 1, 1, 0, 1 },
        { 0, 0, 1, 1, 0, 0, 0, 1, 0, 1 },
        { 1, 0, 0, 1, 1, 0, 1, 1, 0, 0 },
        { 1, 1, 0, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 1, 0, 0, 1, 0, 1 },
        { 1, 1, 1, 0, 1, 0, 1, 0, 0, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }
    };
    change(v,ans);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(ans[i][j]!=-99)
            {
                cout<<1<<" ";
            }else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}
