#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* multiset<int> s;
    s.insert(1);
    s.insert(55);
    s.insert(1);
    s.insert(0);
    s.insert(99);
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }*/
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<int> s;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            s.insert(a);
        }

        int sum=0;
        while(k--)
        {
           auto it=(--s.end());
           sum=sum + *it;
           s.erase(it);
           s.insert(*it/2);
        }
        cout<<sum<<endl;

    }

}

