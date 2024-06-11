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
       set<char> st;
       set<char> st2;
       vector<int> pre(n,0);
       vector<int> suf(n,0);
       for(int i=0;i<n;i++)
       {
           st.insert(s[i]);
           pre[i]=st.size();
       }
        for(int i=n-1;i>=0;i--)
       {
           st2.insert(s[i]);
           suf[i]=st2.size();
       }
       int ans=INT_MIN;
       for(int i=0;i<n-1;i++)
       {
           ans=max(ans,pre[i]+suf[i+1]);
       }

       cout<<ans<<endl;
    }
}

