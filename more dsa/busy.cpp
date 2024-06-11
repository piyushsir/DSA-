#include <bits/stdc++.h>

using namespace std;
bool help(vector<int> arr,int n,int tmp,int i)
{
    if(n==tmp)
    {
        return true;
    }
    if(arr.size()<=i)
    {
        return false;
    }

    int r1=help(arr,n,tmp+arr[i],i+1);
    int r2=help(arr,n,tmp,i+1);
    return r1||r2;

}
bool sol(vector<int> arr,int n)
{
    return help(arr,n,0,0);
}
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    cout<<sol(v,7);
}
