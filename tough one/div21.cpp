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
        int arr[n];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==2)
            {
                cnt++;
            }
        }
        int ans=0;
        int chkcnt=0;
        if(cnt%2!=0)
        {
            ans=-1;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                 if(chkcnt==cnt/2)
                {
                    ans=i;
                    break;
                }
                if(arr[i]==2)
                {
                    chkcnt++;
                }
            }
        }
        if(ans==0)
        {
            ans=1;
        }
        cout<<ans<<endl;
    }
}
