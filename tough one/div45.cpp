#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> arr(n);
        ll sum=0;
        int sign=0;
        ll mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
           if(arr[i]<0)
           {
               sign++;
           }
            sum+=abs(arr[i]);
            mn=min(mn,abs(arr[i]));
        }
       if(sign%2==0)
       {
           cout<<sum<<endl;
       }
       else
       {
            cout<<sum-(2*mn)<<endl;
       }



    }
}


