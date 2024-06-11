#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec;

    for(int i=0;i<2*n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    unordered_map<int,int> mp;
    for(int i=1;i<2*n;i=i+2)
    {
        mp[vec[i-1]]=vec[i];
    }

    /*for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }*/

    queue<pair<int,int>> q;
    q.push({1,0});

    while(!q.empty())
    {
        int tmp1=q.front().first;
        int tmp2 = q.front().second;
        q.pop();
        if(tmp1==30)
        {
            cout<<tmp2<<endl;;
            return tmp2;
        }
        for(int i=1;i<=6;i++)
        {
            int t=tmp1+i;
            if(mp.find(t)!=mp.end())
            {
                q.push({mp[t],tmp2+1});
            }
            else
            {
                q.push({t,tmp2+1});
            }
        }
    }

}
