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
        string tmp=s;
        sort(tmp.begin(),tmp.end(),greater<int>());
        string tmp1="";
        string tmp2="";
        cout<<tmp<<endl;
        int i=0;
        int j=0;
        while(i!=n)
        {
            if(s[i]==tmp[j])
            {
                tmp1+=s[i];
                i++;
                j++;
            }
            else if(s[i]<tmp[j])
            {
                tmp2+=s[i];
                i++;
            }
        }

        cout<<tmp1<<" "<<tmp2<<endl;

    }
}
