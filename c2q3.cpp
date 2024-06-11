#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int curr=1;
        int mx=INT_MIN;
        vector<pair<int,int>> vp;
        unordered_map<int,int> mp;
        int start=INT_MAX;
        int en = INT_MIN;
        for(int i=0;i<n;i++)
        {
            pair<int,int> p;
            cin>>p.first;
            p.first--;
            start = min(start,p.first);
            cin>>p.second;
            p.second--;
            en =max(p.second,en);
            vp.push_back(p);
        }
        sort(vp.begin(),vp.end());
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
        for(int i=1;i<n;i++)
        {
            if(vp[i].first<=vp[i-1].second)
            {
                curr++;
            }
            else
            {
                curr=1;
                for(int i=vp[i-1].second+1;i<vp[i].first;i++)
                {
                    mp[i]++;
                }
            }
            mx = max(mx,curr);
        }
          if(start>0 || en<(m-1) || mp.size()!=0)
          {
              cout<<mx<<endl;
          }
          else
          {

          }
        }

    }
}

