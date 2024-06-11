#include<bits/stdc++.h>
using namespace std;
int sol(int arr[],int n)
{
    int csum=0;
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
        csum=max(csum,totalsum);
        if(totalsum<0)
        {
            totalsum=0;
        }
    }
    return csum;
}
int main()
{
    int arr[]={5, 15, -30, 10, -5, 40, -10};
    cout<<sol(arr,7);
}

