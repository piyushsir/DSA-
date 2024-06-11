#include<bits/stdc++.h>
using namespace std;
const int mod = 10e9+7;
#define ll long long
ll binexpo(ll a,ll b)
{
     ll ans=1;
     while(b)
     {
         if(b&1)
         {
             ans= ((ans%mod)*(a%mod))%mod;
         }
         a=((a%mod)* (a%mod))%mod;
         b=b>>1;
     }
     return ans;

}
ll power2(ll num,ll power)
{
    ll lo=0;
    ll hi=64;

    while(lo<=hi)
    {
        ll mid = (lo+hi)/2;
        if(((binexpo(power,mid)%mod))==num)
        {
            return mid;
        }
        else if(((binexpo(power,mid)%mod))>num)
        {
            hi = mid-1;
        }
        else
        {
            lo = mid+1;
        }
    }

    return hi;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      cout<<binexpo(16,4);
    }
}
