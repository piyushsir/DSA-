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
        map<int,int> m;
        int arr[n];
        int f=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
            sum+=arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
             if((arr[i]==-1) && (arr[i+1]==-1))
            {
                f=1;
            }
        }
        int ans=0;
       if(m.size()==1)
       {
           if(m.find(-1)!=m.end())
           {
               ans=sum+4;
           }
           else
           {
               ans=sum-4;
           }
       }
       else if(f)
       {
           ans=sum+4;
       }
       else
       {
           ans=sum;
       }
        cout<<ans<<endl;
    }
}
