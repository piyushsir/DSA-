#include<bits/stdc++.h>
using namespace std;
int divide(int n)
{
    int s=1;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        int p=pow(mid,3);
        if(p<=n)
        {
            return mid;
        }
        else if(p>n)
        {
            e=mid;
        }

    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    cout<<divide(n)<<endl;

}
