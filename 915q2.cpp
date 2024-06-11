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
        int arr[n+1]={0};
        arr[0]=1;
        unordered_map<int,int> mp;
        for(int i=0;i<n-1;i++)
        {
            int a,b;
            cin>>a>>b;
            arr[b]++;
            mp[a]++;
        }
        int num=-99;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==0)
            {
                num=i;
                break;
            }
        }
        //unordered_set<int> st;
        int ans=0;
        int mx=INT_MIN;
        int num2=-99;
        for(auto it:mp)
        {
            if(it.second>mx)
            {
                mx=it.second;
                num2=it.first;
                //st.insert(it.second);
            }
        }

        if(num2!=num)
        {
             mp.erase(num);
            unordered_set<int> fn;
            for(auto it:mp)
            {
              fn.insert(it.second);

            }

            for(auto it:fn)
            {
              ans+=it-1;

            }


            cout<<ans<<endl;
        }
        else
        {
            ans+=mx-1;
            mp.erase(num);
            unordered_set<int> fn;
            for(auto it:mp)
            {
              fn.insert(it.second);

            }

            for(auto it:fn)
            {
              ans+=it-1;

            }


            cout<<ans<<endl;
        }

    }
}
