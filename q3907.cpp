#include<bits/stdc++.h>
using namespace std;
long long fun(vector<long long> mons,long long sum)
{

    long long tmp = sum/2 + sum%2;
    long long ans=sum-tmp;
    for(int l=mons.size()-1;l>=0;l--)
    {
        if(ans>=mons[l])
        {
            ans-=mons[l];
            tmp++;
        }
        else if(ans<mons[l] && ans>0 && mons[l]>0)
        {
            tmp++;
            ans=0;
        }

    }

    return tmp;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> mons(n);
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>mons[i];
            sum+=mons[i];

        }
        sort(mons.begin(),mons.end());
        cout<<fun(mons,sum)<<endl;
    }
}

