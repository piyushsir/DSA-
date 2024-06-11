#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int lett=s[0]-'a';
        int num=s[1]-'0';
        for(int i=0;i<8;i++)
        {
            if(i!=lett)
            {
                char f = 'a'+i;
                cout<<f<<num<<endl;
            }
        }

        for(int i=1;i<=8;i++)
        {
            if(i!=num)
            {
                char f = 'a'+lett;
                cout<<f<<i<<endl;
            }
        }

    }
}
