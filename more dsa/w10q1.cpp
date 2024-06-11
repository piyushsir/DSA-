#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int cntn=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            cntn++;
            mx=max(mx,arr[i]);
        }
    }
    int ans=1;
    if(cntn&1)
    {
        for( int i=0;i<n;i++)
        {
            ans=ans*arr[i];
        }

    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=mx)
             ans=ans*arr[i];
        }

    }
    cout<<ans<<endl;
}
