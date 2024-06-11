#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> a,vector<int> b)
{
    return a[1]<b[1];
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        int s,e;
        cin>>s>>e;
        v.push_back({s,e});
    }
    sort(v.begin(),v.end(),cmp);
    int ans=1;
    int help=v[0][1];
     for(int i=1;i<n;i++)
    {
        if(v[i][1]>=help)
        {
            ans++;
            help=v[i][1];
        }
    }
    cout<<ans<<endl;

}
