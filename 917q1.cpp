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
        int neg=0;
        int pos=0;
        int zero=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                neg++;
            }
            else if(arr[i]==0)
            {
                zero++;
            }
            else
            {
                pos++;
            }
        }
        if(zero!=0)
        {
            cout<<0<<endl;
        }
        else
        {
            if(neg!=0){
            if(neg%2!=0)
            {
               cout<<0<<endl;
            }
            else
            {
                cout<<1<<endl;
                for(int i=0;i<n;i++)
                {
                    if(arr[i]<0)
                    {
                        cout<<i+1<<" "<<0<<endl;
                        break;
                    }
                }
            }
            }
            else
            {
                cout<<1<<endl;
                cout<<1<<" "<<0<<endl;
            }
        }
    }

}
