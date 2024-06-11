#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a;
        cin>>a;
        string s="codeforces";
        int f=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==a)
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
