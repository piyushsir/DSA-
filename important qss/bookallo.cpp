4#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int mid,int m)
{
    int st=1;
    int sum=0;
    for(int i=0;i<4;i++)
    {
        if(sum+arr[i]<=mid)
        {
            sum=sum+arr[i];
        }
        else
        {
            st++;
            if(st>m)
            {
                return false;
            }
            sum=arr[i];
        }
    }
}
int main()
{
    int arr[]={10,20,30,40};
    int e=100;
    int s=40;
    int m=2;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(ispossible(arr,mid,m))
        {
             ans=mid;
             e=mid-1;

        }
        else
        {
             s=mid+1;

        }
    }
    cout<<ans<<endl;
}
