#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int mid,int m)
{
    int w=1;
    int sum=0;
    for(int i=0;i<4;i++)
    {
        if(sum+arr[i]<=mid)
        {
            sum+=arr[i];
        }
        else
        {
            w++;
            if(w>m)
            {
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}
int main()
{
    int arr[]={40,50,60,70};
    int m=5;
    int s=70;
    int e=220;
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
    cout<<ans;
}
