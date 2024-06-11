#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        vector<int> res;
        for(int i=1;i<n;i++)
        {
            if(vec[i-1]>vec[i])
            {
                res.push_back(i);
            }
        }
        int tmp=0;
        for(int i=0;i<res.size();i++)
        {
            if(__builtin_popcount(res[i])!=1)
            {
                cout<<"NO"<<endl;
                tmp=1;
                break;
            }

        }
        if(!tmp)
        {
            cout<<"YES"<<endl;
        }
    }
}
