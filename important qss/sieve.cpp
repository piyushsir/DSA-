#include<bits/stdc++.h>
using namespace std;
void sieve(int *arr,int n)
{
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                arr[j]=1;
            }
        }
    }
}
void prime(int *arr,int n)
{
    for(int i=2;i<=n;i++)
    {
        arr[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                arr[j]=i;
            }
        }
    }
}
int main()
{
    int n=50;
    int arr[50]={0};
    prime(arr,50);
    /*for(int i=2;i<=50;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<" ";
        }
    }*/
    while(n>1)
    {
        cout<<arr[n]<<" ";
        n=n/arr[n];
    }

}
