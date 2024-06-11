#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int ans=0;
        if(m.find('_')!=m.end())
        {
            if(m.size()==1)
            {
                cout<<m['_']+1<<endl;
            }
        }
        else
        {
            if(m['^']%2==0)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
    }
}
