#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* map<string,int> m;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }
    for(auto pr:m)
    {
        cout<<pr.first<<"  "<<pr.second<<endl;
    }
    unordered_map<int ,int> m;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        m[a]=m[a]+1;
    }
    for(auto pr:m)
    {
        cout<<pr.first<<"  "<<pr.second<<endl;
    }
    map<int ,string> m;
    m[1]="abc";
    m.insert({2,"hello"});
    m[3]="bye";
    auto it=m.begin();
    for(it;it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }*/
    multimap<int,string> m;
    m.insert({3,"hello"});
        m.insert({2,"hel"});
        m.insert({1,"o"});
            m.insert({3,"hello"});
    auto it=m.begin();
    for(it;it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }


}
