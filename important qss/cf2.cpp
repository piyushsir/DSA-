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
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        int realans=0;
        int i=1;
       /* for(int j=1;j<=n;j++)
        {
            if(arr[j]>=i)
            {
                ans++;
                i++;
            }
            else
            {
                realans+=((ans*(ans+1))/2);
                ans=1;
                i=2;
            }
        }*/
        int j=1;
       while(j<n)
        {
            if(arr[j]>=i)
            {
                ans++;
                i++;
            }
            else
            {
                realans+=((ans*(ans+1))/2);
                ans=1;
                i=2;
            }
            j++;
        }
       if(arr[j]>=i)
        {
           ans++;
            realans+=((ans*(ans+1))/2);
        }
        else
        {
             realans+=((ans*(ans+1))/2);
             realans++;
        }

        cout<<realans<<endl;
    }
}
