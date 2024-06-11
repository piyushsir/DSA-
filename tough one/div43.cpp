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
        int st=0;
        int ed=n-1;
        int f=0;
        for(int i=0;i<n;i++)
        {
            if((s[i]=='0' && s[ed]=='1')||(s[i]=='1' && s[ed]=='0'))
            {

                            ed--;
                            f=1;
            }
            else
            {
                st=i;
                break;
            }

        }
        if(st==0 && f)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<(n-(2*st))<<endl;
        }

    }
}
