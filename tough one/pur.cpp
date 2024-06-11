#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,d;
        cin>>n>>m>>d;
        vector<int> v1(n);
        vector<int> v2(m);
        int d2=d+1;
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        int t1=0;
        int t2=0;
        int ans=INT_MAX;
        vector<int> sol;
        while(t2<m && t1<n)
        {
            if(v1[t1]==v2[t2])
            {
                sol.push_back(t1);
                t2++;
            }
            else
            {
                t1++;
            }
        }
        int cnt=0;
        int tum=0;
        for(int i=0;i<sol.size()-1;i++)
        {
            if(sol[i]-sol[i+1]<0 && sol[i]+d>=sol[i+1])
            {
                int f=abs(sol[i]-sol[i+1]);
                int f2=d2-f;


                   cnt=min(f,f2);
            }

            if(cnt!=0)
            {
                ans=min(ans,cnt);
            }
            cnt=0;

        }
        if(sol.size()<m)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }

        for(int i=0;i<sol.size();i++)
        {
            cout<<sol[i]<<" ";
        }
        cout<<endl;
    }
}
