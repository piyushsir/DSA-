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
        pair<int,int> p;
        p.first=0;
        p.second=0;
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L'||s[i]=='l')
            {

                p.first--;
            }
            else if(s[i]=='U'||s[i]=='u')
            {
                p.second++;
            }
            else if(s[i]=='D'||s[i]=='d')
            {
                p.second--;
            }
            else if(s[i]=='R'||s[i]=='r')
            {
                p.first++;
            }
            if(p.first==1 && p.second==1)
            {
                f=1;
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
