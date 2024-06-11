#include <bits/stdc++.h>
using namespace std;
vector<int> spiral(vector<vector<int>> m)
{
    vector<int> ans;
    int sr,er,sc,ec,mr,n;
    mr=m.size();
    n=m[0].size();
    sr=0;
    er=mr-1;
    sc=0;
    ec=n-1;
    int count=0;
    while(sr<=er && sc<=ec)
    {
        for(int i=sr;i<=ec;i++)
        {
            ans.push_back(m[sr][i]);
            count++;
        }
        sr++;
        if(count>mr*n)return ans;
        for(int i=sr;i<=er;i++)
        {
            ans.push_back(m[i][ec]);
            count++;
        }
        ec--;
        if(count>mr*n)return ans;
        for(int i=ec;i>=sc;i--)
        {
            ans.push_back(m[er][i]);
            count++;
        }
        er--;
        if(count>mr*n)return ans;
        for(int i=er;i>=sr;i--)
        {
            ans.push_back(m[i][sc]);
            count++;
        }
        sc++;
        if(count>mr*n)return ans;
    }
    return ans;



    }

int main()
{
    vector<vector<int>> v;
    v={{1,2,3,4},{5,6,7,8},{0,1,2,3},{9,8,7,6}};
    vector<int> a=spiral(v);
    for(auto ab:a)
    {
        cout<<ab<<"  ";
    }
}
