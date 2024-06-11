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
        vector<int> v(n);
        vector<int> cnt(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<n)
            {
                cnt[v[i]]++;
            }
        }
        int mex=0;
        while(cnt[mex]>0)
        {
            mex++;
        }

        if(mex==0)
        {
            cout<<0<<endl;
        }
        else
        {
            long long dp[mex][mex+1];

            for(int i=0;i<=mex;i++)
            {
                dp[0][i] = 1LL*(cnt[0]-1)*i;
            }

            for(int i=1;i<mex;i++)
            {
                for(int j=0;j<=mex;j++)
                {
                    dp[i][j] = dp[i-1][j];
                    long long curr = 1LL*(cnt[i]-1)*j + i + dp[i-1][i];
                    dp[i][j] = min(curr,dp[i][j]);

                }
            }
            cout<<dp[mex-1][mex]<<endl;;
        }

    }
}
