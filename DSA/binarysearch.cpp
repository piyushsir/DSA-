#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int n,int key)
{

    int s=0;
    int e=n-1;
    while(s<=e)
    {
    int mid=s + (e-s)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    }
return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    sort(arr,arr+7);
    if(bs(arr,7,5)!=-1)
    {
        cout<<"present at "<<bs(arr,7,5)<<endl;
    }
    else
    {
        cout<<"absent"<<endl;
    }

}


