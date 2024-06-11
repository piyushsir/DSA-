#include<bits/stdc++.h>
using namespace std;

   vector<string> ans;
    bool find(vector<string> dict,string &word)
    {
        for(int i=0;i<dict.size();i++)
        {
            if(dict[i].compare(word)==0)
            {
                return true;
            }
        }

        return false;
    }
    void sol(int n, vector<string> &dict, string s,string res)
    {
        for(int i=1;i<=n;i++)
        {
            string pre = s.substr(0,i);

            if(find(dict,pre))
            {
                if(i==n)
                {
                    res+=pre;
                    cout<<res<<endl;
                    ans.push_back(res);
                    return;
                }
                sol(n-i,dict,s.substr(i,n-i),res+pre+" ");
            }


        }
    }
        int main()
        {

            vector<string> dict= {"mobile","samsung","sam","sung",
                            "man","mango", "icecream","and",
                            "go","i","love","ice","cream"};
            string s = "iloveicecreamandmango";

            sol(s.size(),dict,s,"");
        }
