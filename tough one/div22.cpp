#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int ans=0;
        if(n&1)
        {
            ans=n/2;
            if(ans%10==9)
            {
              int ans2=ans+1;
              while(ans2-ans!=9)
              {
                  ans--;
                  ans2++;
              }
              cout<<ans<<" "<<ans2<<endl;
            }
            else
            {
              cout<<ans<<" "<<ans+1<<endl;
            }
        }
        else
        {
            ans=n/2;
            cout<<ans<<" "<<ans<<endl;
        }

    }
}
