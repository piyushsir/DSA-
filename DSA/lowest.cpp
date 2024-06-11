#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.first<b.first;
}
int main()
{
    int arr[]={1,6,5,4,7,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++)
    {
        arr[v[i].second]=i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
