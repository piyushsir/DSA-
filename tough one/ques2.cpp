#include<bits/stdc++.h>
using namespace std;
int sol(int arr[],int n)
{
    int s=2;
    int e=n-1;
    int tmp=1;
    while(s<e)
    {
        int mid=s*tmp;
        if(arr[mid]!=arr[mid+1])
        {
            return arr[mid];
        }
        else
        {
            tmp++;
        }
    }
    return -1;
}
int main()
{
    int n=11;
    int arr[n]={1,1,2,2,3,3,4,4,5,5,7};
    if(!(n&1))
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<sol(arr,9)<<endl;
    }

}
