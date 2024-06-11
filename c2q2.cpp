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
         set<int> st;
         for(int i=0;i<n;i++)
         {
             if(s[i]=='0')
             {
                 st.insert(i);
             }
         }
          long long val=0;

         for(int i=n-1;i>=0;i--)
         {
             if(st.empty())
             {
                 cout<<-1<<" ";
                 continue;
             }
             auto it = st.rbegin();
             val+=(i-(*it));
             st.erase(*it);
             cout<<val<<" ";

         }
         cout<<endl;

     }
}
