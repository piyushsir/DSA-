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
        int a[n],b[n];
        int ca=0;
        int cb=0;
        int ch=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                ca++;
            }

        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==1)
            {
                cb++;
            }

        }
        if(ca==cb)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                {
                    ch=1;
                    break;
                }
            }
            if(ch)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            int ans=abs(ca-cb);
            int ct=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                {
                    ct++;
                }
            }
            if(ct==ans)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<ans+1<<endl;
            }

        }
    }
}
