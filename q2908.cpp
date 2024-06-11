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
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a].push_back(i);
        }
        if(mp.size()==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            bool chg=true;
            int cnt=0;
            for(auto it:mp)
            {
                if(it.second.size()>=2)
                {
                    cnt++;
                }
            }
            if(cnt<2)
            {
                cout<<-1<<endl;
            }
            else
            {
                vector<int> ans(n,1);
                for(auto it:mp)
                {
                    if(it.second.size()==1)
                    {
                        continue;
                    }
                    ans[it.second[0]]=1;
                    if(chg)
                    {
                         for(int i=1;i<it.second.size();i++)
                         {
                             ans[it.second[i]]=2;
                         }
                    }
                    else
                    {
                         for(int i=1;i<it.second.size();i++)
                         {
                             ans[it.second[i]]=3;
                         }
                    }
                    chg=!chg;

                }

                for(int i=0;i<n;i++)
                {
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}
