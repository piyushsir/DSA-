#include<iostream>
using namespace std;
int lindex(int arr[],int n,int x,int i)
{
    if(n==i)
    {
        return -1;
    }
    if(arr[n-1]==x)
    {
        return n-1;
    }
    return lindex(arr,n-1,x,i);
}
int main()
{
    int arr[5]={10,8,7,8,9};

     cout<<lindex(arr,5,8,0);
}
