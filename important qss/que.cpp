#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    queue<char> q1;
    stack<char> s2;
    s2.push(s[0]);
    q1.push(s[0]);
    vector<int> v(s.size());
    int k=1;
    int j=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
           if(s2.top()!=s[i])
           {
               if(k!=1)
               {
                   v[j]=k;
                   k=1;
                   j++;
                   q1.push('0');
               }
               s2.push(s[i]);
               q1.push(s[i]);
           }
           else
           {
              k++;
           }
        }
    }
    int m=0;
    while(!q1.empty())
    {
        if(q1.front()=='0')
        {
            cout<<v[m];
            m++;
            q1.pop();
        }
        else
        {
            cout<<q1.front();
            q1.pop();
        }
    }




}
