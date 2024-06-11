#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end(),greater<int>());
        vector<pair<int,int>> sol(n);
        int i;
        for(i=0;i<n;i++)
        {
            sol[i].first = vec[i];
        }
        for(int j=0;j<n;j++)
        {
            sol[j].second = vec[i];
            i++;
        }
        int area=0;
        for(int k=1;k<n;k++)
        {
            area += abs(sol[k-1].first-sol[k].first) + abs(sol[k-1].second-sol[k].second);
        }
        cout<<area<<endl;
        for(int k=0;k<n;k++)
        {
            cout<<sol[k].first<<" "<<sol[k].second<<endl;
        }
    }
}
