#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<char,int>> v;
    string a="helloworld";
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!='0'){
        int count=1;
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]='0';
            }

        }
        v.push_back(make_pair(a[i],count));
        }

    }
    for(int i=0;i<v.size();i++)
    {
       cout<<v[i].first<<"  "<<v[i].second<<endl;
    }

}
