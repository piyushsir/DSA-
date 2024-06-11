#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        vector<int> heights(n);
        for(int i=0;i<n;i++)
        {
            cin>>heights[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int tmp = abs(H-heights[i]);
            int st=1;
            int en=m;
            int diff=-9999;
            while(st<en)
            {
                if(diff == tmp)
                {
                    cnt++;
                    break;
                }
                else
                {
                    diff = abs(k*en - k*st);
                }
                if(diff>tmp)
                {
                    en--;
                }
                else if(diff<tmp)
                {
                    st++;
                }

            }
        }

        cout<<cnt<<endl;
    }
}
