#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a;
        cin>>b;
        int st=-99;
        int en = -99;
        char num ='#';
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
                st=i;
                num=a[i];
                break;
            }
        }
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]==b[i] && a[i]==num)
            {
                en=i;
                break;
            }
        }
        for(int i=0;i<st;i++)
        {
           if(a[i]!=b[i])
           {

           }
        }

    }

}

