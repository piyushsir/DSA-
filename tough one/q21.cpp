#include<bits/stdc++.h>
using namespace std;
int sol(int arr[],int m)
{
    int s=0;
    int e=m-1;
    while(s<=e)
    {
        if(s==0)
        {
           s=(2*s)+1;
        }
        if(arr[s]==0)
        {
            e=s;
            s=s-s/2;
        }
        else if(arr[s]!=0 && arr[s+1]!=0)
        {
            s=s*2;
        }
        else if(arr[s]!=0 && arr[s+1]==0)
        {
            return s;
        }
    }
    return -1;
}

int bs(int arr[],int n,int x)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            e=mid-1;
        }
        else
        {
            s=mid;
        }
    }
}
int main()
{
    int m=11;
    int arr[m]={1,2,3,4,5,0,0,0,0,0,0};
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"pos of 3 in given array"<<endl;
    cout<<bs(arr,sol(arr,m),3);

}

