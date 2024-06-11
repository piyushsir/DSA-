#include<bits/stdc++.h>
using namespace std;
int partit(int a[],int l,int h)
{
    int arr[h];
    for(int i=l;i<h;i++)
    {
        arr[i]=a[i];
    }
    //int arr[7]={2,7,5,3,0,8,1};
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(arr[i]<=pivot)
            i++;
        while(arr[j]>pivot)
            j--;

        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    return (h-j);
}
int main()
{
    vector<int> v;
    int arr[7]={2,7,5,3,0,8,1};
    for(int i=0;i<7;i++)
    {

        cout<<partit(arr,i,7)<<" ";
    }
}
