#include<bits/stdc++.h>
using namespace std;
void is(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>arr[j+1])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
int main()
{
    int arr[]={2,1,3,4,3,8,7};
    is(arr,7);
    for(int i=0;i<7;i++)
        cout<<arr[i]<<endl;

}

