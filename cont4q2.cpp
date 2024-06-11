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
        vector<int> ev;
        vector<int> odd;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]%2==0)
            {
                ev.push_back(vec[i]);
            }
            else{
                odd.push_back(vec[i]);
            }
        }

        sort(ev.begin(),ev.end(),greater<int>());

        sort(odd.begin(),odd.end(),greater<int>());
        vector<int> sol(n);
        for(int i=0;i<n;i++)
        {
           if(vec[i]&1)
           {
               sol.push_back(odd.back());
               odd.pop_back();
           }
           else
           {
               sol.push_back(ev.back());
               ev.pop_back();
           }

        }


        if(is_sorted(sol.begin(),sol.end()))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }


    }
}
