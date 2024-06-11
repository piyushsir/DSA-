#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int mid,int m)
{
    int c=1;
    int sum=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]-sum>=mid)
        {
            c++;
            if(c==m)
                return true;
            sum=arr[i];
        }

    }
    return false;
}
int main()
{
    int arr[]={1,2,3,4,6};
    int m=2;
    int s=0;
    int e=6;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(ispossible(arr,mid,m))
        {
            ans=mid;
             s=mid+1;

        }
        else
        {

           e=mid-1;
        }
    }
    cout<<ans;
}
