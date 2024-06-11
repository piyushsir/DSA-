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
        vector<int> arr(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if(mp.size()>2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(mp.size()==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                int mxfreq=INT_MIN;
                for(auto it:mp)
                {
                    mxfreq=max(mxfreq,it.second);
                }
                if(mxfreq==ceil((n*1.0)/2))
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }

    }
}
