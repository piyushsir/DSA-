#include<bits/stdc++.h>
using namespace std;
int fib1(int n)
{
    if(n==1||n==0)
    {
        return n;
    }
    return fib1(n-1)+fib1(n-2);
}
int fib2(int*arr,int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    if(arr[n]!=0)
    {
        return arr[n];
    }
    int ans=fib2(arr,n-1)+fib2(arr,n-2);
    arr[n]=ans;
    return ans;
}
int fib3(int n)
{
    int *arr=new int(n+1);
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    int ans=arr[n];
    delete []arr;
    return ans;
}
int minstepto1(int n)
{
    if(n<=1)
    {
        return 0;
    }
    int y=INT_MAX;
    int z=INT_MAX;
    int x=minstepto1(n-1);

    if(n%3==0)
    {
        y=minstepto1(n/3);
    }
    if(n%2==0)
    {
        z=minstepto1(n/2);
    }

    int ans=min(x,min(y,z))+1;
    return ans;

}
int minstepto12(int n,int *arr)
{
    if(n<=1)
    {
        return 0;
    }
    if(arr[n]!=0)
    {
        return arr[n];
    }

    int x,y,z;
    y=INT_MAX;
    z=INT_MAX;
    x=minstepto12(n-1,arr);
    if(n%2==0)
    {
        y=minstepto12(n/2,arr);
    }
    if(n%3==0)
    {
        z=minstepto12(n/3,arr);
    }
    int ans=min(x,min(y,z))+1;
    arr[n]=ans;
    return ans;
}
int minstepto13(int n)
{
    int *arr=new int[100];
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=n;i++)
    {
        int y=INT_MAX;
        int z=INT_MAX;
        int x=arr[i-1];
        if(n%2==0)
        {
            y=arr[i/2];
        }
        if(n%3==0)
        {
            z=arr[i/3];
        }
        int ans=min(x,min(y,z))+1;
        arr[i]=ans;
    }
    return arr[n];
}
int main()
{
    /*cout<<fib1(6);
    int arr[10]={0};
    cout<<fib2(arr,6);
    cout<<fib3(6);*/
    //cout<<minstepto1(10);
    int arr[100]={0};
    cout<<minstepto13(10);
}
