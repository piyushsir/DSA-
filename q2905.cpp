#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        unordered_map<char,int> even;
        unordered_map<char,int> odd;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second%2==0)
            {
                even[it.first]=it.second;
            }
            else
            {
                odd[it.first] = it.second;
            }

        }
        while(k)
        {
            if(odd.size()!=0)
            {
                int tmp = odd.begin()->second;
                if(tmp==1)
                {
                    odd.erase(odd.begin()->first);
                }
                else
                {
                    tmp--;
                    even[odd.begin()->first] = tmp;
                    odd.erase(odd.begin()->first);
                }

            }
            else
            {
                int tmp = even.begin()->second;

                tmp--;
                odd[even.begin()->first] = tmp;
                even.erase(even.begin()->first);

            }
            k--;
        }

        if(odd.size()==1 || odd.size()==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }



    }

}
