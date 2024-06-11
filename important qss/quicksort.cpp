#include<bits/stdc++.h>
using namespace std;
int pat(int *arr,int l,int h)
{
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<=j){
    while(arr[i]<=pivot)
    {
       i++;
    }
    while(arr[j]>pivot)
    {
        j--;
    }
    if(i<j)
    {
        swap(arr[i],arr[j]);
    }
    }
    swap(arr[j],arr[l]);
    return j;
}
void quicksort(int *arr,int l,int h)
{
    if(l<h)
    {
        int p=pat(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}
int main()
{
    cout<<"run"<<endl;
    int arr[]={6,5,7,8,1};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
