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
        int ans=0;

        unordered_set<char> st;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
            ans+=st.size();
        }

        cout<<ans<<endl;
    }

}
