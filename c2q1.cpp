#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;
        int tmp = x;
        int sum=0;
        while(tmp)
        {
            sum+=tmp%10;
            tmp=tmp/10;
        }
        if(sum%k==0)
        {
            cout<<x<<endl;
        }
        else{
              int tmp3=x;
              while(sum%k!=0)
              {
                  sum=0;
                  tmp3++;
                  int tmp4=tmp3;
                  while(tmp4)
                  {
                      sum+=tmp4%10;
                       tmp4=tmp4/10;
                  }

              }
              cout<<tmp3<<endl;
        }
    }
}
