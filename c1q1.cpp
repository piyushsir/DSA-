#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;

        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        long long  time=b-1;
        b=1;
        int i=0;
        for(i=0;i<n;i++)
        {
            if(v[i]<a)
            {
                time+=v[i];
            }
            else{
                time+=a-1;
            }
        }
        time++;


        cout<<time<<endl;

    }
}
