#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=INT_MIN;
    int curmx=0;
    for(int i=0;i<n;i++)
    {
        curmx+=arr[i];
        if(curmx>mx)
        {
            mx=curmx;
        }
        if(curmx<0)
        {
            curmx=0;
        }
    }
    cout<<mx<<endl;

}
//2 -4 1 9 -6 7 -3
