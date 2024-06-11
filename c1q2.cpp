#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        multiset<int> j;
        multiset<int> g;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i=0;i<n;i++)
        {
            int tmp;
            cin>>tmp;
            j.insert(tmp);
            mx = max(mx,tmp);
            mn=min(mn,tmp);
        }
         for(int i=0;i<m;i++)
        {
            int tmp;
            cin>>tmp;
            g.insert(tmp);
            mx = max(mx,tmp);
            mn=min(mn,tmp);
        }
        //int turn=0;
        for(int i=1;i<=k;i++)
        {
            int sm = *j.begin();
            int big = *g.rbegin();
            //cout<<sm<<" "<<big<<endl;
            if(sm==mn && big==mx)
            {
                if((k-i+1)%2==0)
                {
                    break;
                }

            }
            if(sm<big){
            if(i&1)
            {
                int smll = *j.begin();
                int lrg = *g.rbegin();

                j.insert(lrg);
                g.insert(smll);
                j.erase(j.find(smll));
                g.erase(g.find(lrg));
            }
            else
            {
                int smll = *g.begin();
                int lrg = *j.rbegin();

                g.insert(lrg);
                j.insert(smll);
                g.erase(j.find(smll));
                j.erase(g.find(lrg));
            }
            }

        }
        long long sum=0;
        for(auto &it:j)
        {
            sum+=it;
        }

        cout<<sum<<endl;



    }
}

