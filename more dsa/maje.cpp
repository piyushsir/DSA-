#include<bits/stdc++.h>
using namespace std;
bool sol(string s1,string s2,int i,int j)
{
    if(s1.size()==0)
    {
        return 1;
    }
    if(s2.size()==0)
    {
        return 0;
    }
    if(i==s1.size()-1 )
    {
        return 1;
    }
    if(j==s2.size()-1)
    {
        return 0;
    }

    if(s1[i]==s2[j])
    {
    return sol(s1,s2,i+1,j+1);
    }
    return sol(s1,s2,i,j+1);
}
int main()
{
    string s1="ppap";
    string s2="penpin";
    cout<<sol(s1,s2,0,0);
}
