#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> vec(n);
        int odd=0;
        int one=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]==1)
            {
                one++;
            }
            if(vec[i]&1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        vector<int> dp(n+1,0);

        if(k==2)
        {
            if(vec[0]%2==0)
            {
                dp[0]=0;
            }
            else
            {
                dp[0]=1;
            }
            for(int i=1;i<n;i++)
            {
                if(vec[i]%2==0)
                {
                    dp[i]=min(dp[i-1],0);
                }
                else
                {
                    dp[i]=min(dp[i-1],1);
                }
            }
        }
        else if(k==3)
        {
            if(vec[0]%3==0)
            {
                dp[0]=0;
            }
            else
            {
                int tmp=(vec[0]/3)+1;
                dp[0]=(3*tmp)-vec[0];
            }
            for(int i=1;i<n;i++)
            {
                if(vec[i]%3==0)
                {
                    dp[i]=min(dp[i-1],0);
                }
                else
                {
                    int tmp=(vec[i]/3)+1;
                    dp[i]=min(dp[i-1],(3*tmp)-vec[i]);
                }
            }
        }
        else if(k==4)
        {
            if(even>1)
            {
                dp[n]=0;
            }
            else if(one>1)
            {
                dp[n]=2;
            }
            else
            {
                if(vec[0]%4==0)
                {
                    dp[0]=0;
                }
                else
                {
                    int tmp=(vec[0]/4)+1;
                    if(n>1)
                    {
                         dp[0]=min((4*tmp)-vec[0],2);
                    }
                    else
                    {
                         dp[0]=(4*tmp)-vec[0];
                    }

                }
                for(int i=1;i<n;i++)
                {
                    if(vec[i]%4==0)
                    {
                        dp[i]=min(dp[i-1],0);
                    }
                    else
                    {
                        int tmp=(vec[i]/4)+1;
                        dp[i]=min(dp[i-1],(4*tmp)-vec[i]);
                    }
                }
            }

        }
        else
        {
            if(vec[0]%5==0)
            {
                dp[0]=0;
            }
            else
            {
                int tmp=(vec[0]/5)+1;
                dp[0]=(5*tmp)-vec[0];
            }
            for(int i=1;i<n;i++)
            {
                if(vec[i]%5==0)
                {
                    dp[i]=min(dp[i-1],0);
                }
                else
                {
                    int tmp=(vec[i]/5)+1;
                    dp[i]=min(dp[i-1],(5*tmp)-vec[i]);
                }
            }
        }
      cout<<dp[n-1]<<"**"<<endl;
    }
}
