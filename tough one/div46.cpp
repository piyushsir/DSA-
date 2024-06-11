#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum(ll n)
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
        ll n,q;
        cin>>n>>q;
        ll arr[n+1];
        set<int> s;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(arr[i]>9)
            {
                s.insert(i);
            }
        }
        for(int i=0;i<q;i++)
        {
            int a;
            cin>>a;
            if(a==1)
            {
                ll l,r;
                cin>>l>>r;
                int pre=l-1;
                while(true)
                {
                    auto it=s.upper_bound(pre);
                    if(it==s.end())
                    {
                        break;
                    }
                    if(*it<=r)
                    {
                        arr[*it]=sum(arr[*it]);
                        pre=*it;
                        if(arr[*it]<=9)
                        {
                            s.erase(it);
                        }
                    }
                    else
                    {
                        break;

                    }
                }


            }
            else
            {
                ll d;
                cin>>d;
                cout<<arr[d]<<endl;
            }
        }
    }
}
