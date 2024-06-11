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
        string s;
        cin>>s;
        int one=0;
        int zero=0;
        if(s.size()%2!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='1')
                {
                    one++;
                }
                else
                {
                    zero++;
                }
            }
            if(one!=zero)
            {
                cout<<-1<<endl;
            }
            else
            {
                vector<int> sol;
                int op=0;
                pair<int,int> cnt;
                cnt.first=1;
                cnt.second = s[0]-'0';
                int left=0;
                int right=s.size()-1;
                while(left<right)
                {
                    if(s[left]==s[left+1])
                    {
                        cnt.first++;
                        cnt.second = s[left]-'0';
                    }
                    else
                    {
                        int freq=0;
                        for(int i=right;i>right-cnt.first;i--)
                        {
                           if(s[right]==!cnt.second)
                           {
                               freq++;
                           }
                           else
                           {
                               break;
                           }
                        }
                        if(freq==cnt.first)
                        {

                        }
                        else
                        {
                            sol.push_back(right)
                            for(int i=0;i<cnt.first;i++)
                            {
                                if(cnt.second==0)
                                {
                                    s+='0';
                                }
                                else
                                {
                                    s+='1';
                                }

                            }
                            right=right+cnt.first;
                        }

                    }
                    left++;

                }

            }
        }

    }
}
