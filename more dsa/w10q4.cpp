#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> a,vector<int> b)
{
    return a[2]>b[2];
}
int main()
{
    int n;
    cin>>n;
    int limit=40;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        int q,p;
        cin>>q>>p;
        v.push_back({q,p,p/q});
    }
    sort(v.begin(),v.end(),cmp);
    int cst=0;
    for(int i=0;i<n;i++)
    {
        if(limit>=v[i][0])
        {
            cst+=v[i][1];
            limit-=v[i][0];
        }
        else
        {
            cst+=v[i][2]*limit;
            break;
        }

    }
    cout<<cst<<endl;
}
