#include<bits/stdc++.h>
using namespace std;

bool isgood(string s,vector<char> &req)
{
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            req.push_back(s[i]);
        }
    }
    if(req.size()==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        vector<char> req;
        vector<char> timepass;
        bool isg1=isgood(s1,req);
        bool isg2= isgood(s2,timepass);
        if(!isg1 && !isg2)
        {
            cout<<"NO"<<endl;
        }
        else if(isg1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool flag=1;
            if(s2[0]!=s2[s2.size()-1])
            {
                cout<<"NO"<<endl;
            }
            else
            {
                char tmp = s2[0];
                for(int i=0;i<req.size();i++)
                {
                    if(req[i]==tmp)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
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

