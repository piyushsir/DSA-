#include<bits/stdc++.h>
using namespace std;
int row[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int col[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
bool isvalid(int i,int j)
{
    return (i>=0 && i<5 && j>=0 && j<5);
}
void dfs(vector<vector<char>> &v,string word,set<vector<pair<int,int>>> &s,int i,int j,int idx,vector<pair<int,int>> sol)
{
    if(v[i][j]!=word[idx])
    {
        return;
    }
    sol.push_back({i,j});
    if(idx==word.size()-1)
    {
        s.insert(sol);
        sol.clear();
        return;
    }
    for(int k=0;k<8;k++)
    {
        int ni=i+row[k];
        int nj=j+col[k];
        if(isvalid(ni,nj))
        {
            dfs(v,word,s,ni,nj,idx+1,sol);
        }
    }

}
void findpos(vector<vector<char>> &v,string word,set<vector<pair<int,int>>> &s)
{
    int r=v.size();
    int c=v[0].size();
    vector<pair<int,int>> sol;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            dfs(v,word,s,i,j,0,sol);
        }
    }
}
int main()
{
    vector<vector<char>> v=
    {
        { 'D', 'E', 'M', 'X', 'B' },
        { 'A', 'O', 'E', 'P', 'E' },
        { 'D', 'D', 'C', 'O', 'D' },
        { 'E', 'B', 'E', 'D', 'S' },
        { 'C', 'P', 'Y', 'E', 'N' }
    };
    string word="CODE";
    set<vector<pair<int,int>>> s;
    findpos(v,word,s);
    for(auto it:s)
    {
        for(auto ite:it)
        {
            cout<<"("<<ite.first<<","<<ite.second<<")"<<" ";
        }
        cout<<endl;
    }
}
