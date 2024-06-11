#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    vector<int> preq(n,0);
    unordered_map<int,vector<int>> mp;
    for(int i=0;i<p;i++)
    {
        int a,b;
        cin>>a>>b;
        preq[a]++;
        mp[b].push_back(a);
    }

     queue<int> q;
    for(int i=0;i<n;i++)
    {
        if(preq[i]==0)
        {
            preq[i]=-99;
            q.push(i);

        }
    }

    while(!q.empty())
    {
        int tmp=q.front();
        q.pop();
        for(int i=0;i<mp[tmp].size();i++)
        {
            preq[mp[tmp][i]]--;
        }

        for(int i=0;i<n;i++)
        {
            if(preq[i]==0)
            {
                preq[i]=-99;
                q.push(i);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(preq[i]!=-99)
        {
            cout<<"no"<<endl;
            return 0;
        }
    }

    cout<<"yes"<<endl;



}
