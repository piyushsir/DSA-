#include<bits/stdc++.h>
using namespace std;
int c[128]={0};
bool isvowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        return true;
    }
    return false;
}
int sol(string s,int k)
{
    int j=-1;
    int ans=-1;
    for(int i=0;i<s.size();i++)
    {
        if(isvowel(s[i]))
        {
            if(++c[s[i]]==1)
            {
                k--;
            }
        }

        while(k<0)
        {
            if(isvowel(s[++j]))
            {

              if(--c[s[j]]==0)
                {
                    k++;
                }
            }
        }
        if(k==0)
        {
            ans=max(ans,i-j);
        }
    }
    return ans;

}
int main()
{
    int k=2;
    string s="artyebui";
    cout<<sol(s,k)<<endl;
}
