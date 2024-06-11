#include<bits/stdc++.h>
using namespace std;

int knap(int a[],int b[],int c,int n)
{
    int dp[n+1][c+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(j==0 ||i==0)
            {
                dp[i][j]=0;
            }
            else if(b[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=max(a[i-1]+dp[i][j-b[i-1]],dp[i-1][j]);
            }
        }
    }
    return dp[n][c];
}
int main()
{
    int a[]={10,20,30,40};
    int b[]={2,13,15,19};
    int c=38;
    cout<<knap(a,b,c,4)<<endl;

}

