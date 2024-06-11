#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mp;
        cin>>n>>mp;
        string s1,s2;
        cin>>s1>>s2;
        map<char,int> m;
        if(s1.size()>s2.size())
        {
            for(int i=0;i<s1.size();i++)
            {
                m[s1[i]]++;
            }
            for(int i=0;i<s2.size();i++)
            {
                m[s2[i]]--;
            }
            int f=1;
            int odd=0;
            for(auto it:m)
            {
                if(it.second<0)
                {
                    f=0;
                    break;
                }
                if(it.second%2!=0)
                {
                    odd++;
                }
                else
                {
                    continue;
                }
                if(odd>1)
                {
                    f=0;
                    break;
                }


            }
            if(f)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        }
        else
        {
            for(int i=0;i<s2.size();i++)
            {
                m[s2[i]]++;
            }
            for(int i=0;i<s1.size();i++)
            {
                m[s1[i]]--;
            }
            int f=1;
            int odd=0;
            for(auto it:m)
            {
                if(it.second<0)
                {
                    f=0;
                    break;
                }
                if(it.second%2!=0)
                {
                    odd++;
                }
                else
                {
                    continue;
                }
                if(odd>1)
                {
                    f=0;
                    break;
                }


            }
            if(f)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        }
    }
}
