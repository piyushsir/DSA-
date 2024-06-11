#include<iostream>
using namespace std;
int findex(int arr[],int n,int a,int i)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==a)
    {
        return i;
    }
    findex(arr,n,a,i+1);
}
int main()
{
    int arr[5]={10,6,7,8,9};

     cout<<findex(arr,5,18,0);

}
