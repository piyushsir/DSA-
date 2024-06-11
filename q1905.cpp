#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<int,int> mp;
        for(int i=1;i<10;i++)
        {
            mp[i] = i;
        }
        mp[0]=10;
        int in =1;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans +=abs(mp[(s[i]-'0')]-mp[in])+1;
            in=(s[i]-'0');
        }
        cout<<ans<<endl;
    }



}
