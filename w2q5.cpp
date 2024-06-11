#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    sort(arr.begin(),arr.end());

    int mn=arr[0];
    int mx=arr[n-1];
    int ans=mx-mn;
    int tmpmn=INT_MAX;
    int tmpmx=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]-k>0)
        {
            tmpmn=min(arr[0]+k,arr[i]-k);

            tmpmx=max(arr[n-1]-k,arr[i-1]+k);
        }
        ans=min(ans,tmpmx-tmpmn);
    }


    cout<<ans<<endl;
}

/*
5
10
2 6 3 4 7 2 10 3 2 1
*/
