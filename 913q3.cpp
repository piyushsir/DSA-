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
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }

        if(mp.size()==1)
        {
            cout<<mp[s[0]]<<endl;
        }
        else
        {
            int mx=INT_MIN;
            int nm=0;
            for(auto it:mp)
            {
                if(it.second>mx)
                {
                    mx=it.second;
                    nm=it.first;
                }
            }
            int sm=0;
            for(auto it:mp)
            {
                if(it.first!=nm)
                {
                    sm+=it.second;
                }
            }

            if(n%2==0)
            {
                if(mx > (n/2))
                {
                    cout<<mx-sm<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
            else
            {
                cout<<max(1,mx-sm)<<endl;
            }

        }
    }
}
