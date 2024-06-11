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
        string n="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                n+='1';
            }
            else if(s[i]=='3')
            {
                n+='3';
            }


        }
        cout<<n<<endl;
    }
}
