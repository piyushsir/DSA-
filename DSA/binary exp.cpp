#include<bits/stdc++.h>
 const int mod = 1e9+7;
typedef long long ll;
using namespace std;
int gcd(int a,int b){
    int result=min(a,b);
    while(result)
    {
        if(a%result==0&&b%result==0)
        {
            return result;
            break;
        }
        result--;
    }
}
int gcda(int a,int b)
{
    if(b==0)
        return a;
    return gcda(b,a%b);
}
int gcdarr(int arr[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    while(min)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%min!=0)
            {
                count++;
            }
        }
        if(count==0)
        {
            return min;
            break;
        }
        min--;
    }
}
ll binexprec(ll a,ll b)
{
    if(b==0)
        return 1;
    ll n=binexprec(a,b/2);
    if(b&1)
    {
        return (a*((n*n)%mod))%mod;
    }
    else
        return (n*n)%mod;
}
ll be(ll a,ll b)
{
    ll ans=1;
    while(b){

    if(b&1)
    {
        ans=(ans*a)%mod;
    }
    a=(a*a)%mod;
    b>>=1;
    }
    return ans;
}

int main()
{
    //int arr[]={50,5,25,30,100};
    //cout<<gcdarr(arr,5);
    cout<<binexprec(2,mod-2)<<endl;
    cout<<be(2,12547)<<endl;
    cout<<be(2,mod-2);
}
