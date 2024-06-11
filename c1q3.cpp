#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,m;
        cin>>n>>m;
        long long ans=0;
        int g=__gcd(n,m);
        int np = __builtin_popcount(m/g);
        if(np>1)
        {


                cout<<-1<<endl;

        }
        else
        {

            while(n)
            {
                if(n>=m)
                {
                    n=n%m;
                }
                else
                {
                    ans+=n;
                    n=n*2;
                }
            }

            cout<<ans<<endl;
        }
    }
}
