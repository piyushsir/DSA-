#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
       cin>>n;
       vector<int> v;
       map<int ,int> m;
       for(int i=0;i<n;i++)
       {
           int a;
           cin>>a;
           v.push_back(a);
           m[a]=m[a]+1;
       }
       sort(v.begin(),v.end());
       auto it=m.begin();
       for(it;it!=m.end();it++)
       {
           if((it->second)>n/2)
           {
            cout<<"no"<<endl;
            return;
           }
       }

       if(n%2==0 && m.size()==2)
       {
          auto it=m.begin();
       for(it;it!=m.end();it++)
       {
           if(it->second==++it->second)
           {
            cout<<"no"<<endl;
            return;
           }
       }
       }
       cout<<"yes"<<endl;
       for(auto it:v)
       {
        cout<<it<<" ";
       }cout<<endl;
       for(int i=(n/2);i<n;i++)
       {
           cout<<v[i]<<" ";
       }
       for(int i=0;i<n/2;i++)
       {
           cout<<v[i]<<" ";
       }
       cout<<endl;

}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     solve();
   }
}
