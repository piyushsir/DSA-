#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> words;
    unordered_set<char> st;
    for(int i=0;i<n;i++)
    {
        string tmp;
        cin>>tmp;
        for(int j=0;j<tmp.size();j++)
        {
            st.insert(tmp[j]);
        }
        words.push_back(tmp);
    }


    vector<pair<int,int>> adj;
    for(int i=0;i<n-1;i++)
    {
        string t1 = words[i];
        string t2 = words[i+1];

        int j=0;
        while(j<t1.size() && j< t2.size())
        {
            if(t1[j]!=t2[j])
            {
                pair<int,int> p;
                p.first = t1[j]-'a';
                p.second = t2[j]-'a';
                adj.push_back(p);
                break;
            }
            j++;
        }
    }
    //cout<<st.size()<<endl;

    vector<int> preq(st.size(),0);
    unordered_map<int,vector<int>> mp;
    for(int i=0;i<adj.size();i++)
    {
        preq[adj[i].first]++;
        mp[adj[i].second].push_back(adj[i].first);
    }
    queue<int> q;
    vector<int> sol;
    for(int i=0;i<st.size();i++)
    {
        if(preq[i]==0)
        {
            q.push(i);
            preq[i]=-99;
            sol.push_back(i);
            break;
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

        for(int i=0;i<st.size();i++)
        {
            if(preq[i]==0)
            {
                q.push(i);
                sol.push_back(i);
                preq[i]=-99;
            }
        }
    }

    for(int i=0;i<st.size();i++)
    {
        if(preq[i]!=-99)
        {
            cout<<"false"<<endl;
            return 0;
        }
        //cout<<preq[i]<<" ";
    }

    for(int i=st.size()-1;i>=0;i--)
    {
        cout<<char('a'+sol[i])<<" ";
    }
    cout<<endl;

}



