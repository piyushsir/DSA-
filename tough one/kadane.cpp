#include<bits/stdc++.h>
using namespace std;
int mxsum(int arr[],int n)
{
    int cursum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cursum+=arr[i];
        if(cursum>0)
        {
            mx=max(mx,cursum);
        }
        else
        {
            cursum=0;
        }
    }
    return mx;
}
int main()
{
    int arr[]={4,-2,1,9,-6,7,-3};
    cout<<mxsum(arr,7);
}
