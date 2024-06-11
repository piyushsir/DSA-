#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        if(y<=x)
        {
            cout<<x<<endl;
        }
        else
        {
            int tmp = x+k;
            if(y-tmp<=0)
            {
                cout<<y<<endl;
            }
            else
            {

                int tmp2 = 2*(y-tmp);
                tmp+=tmp2;
                cout<<tmp<<endl;
            }
        }
    }
}
