#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    multimap<int,int> vp;
	    for(int i=0;i<m;i++)
	    {
	        int a,b;
	        cin>>a>>b;
	        vp.insert({a,b});
	    }
	    int arr[n];
	    for(int i=1;i<=n;i++)
        {
            arr[i-1]=i;
        }
	    int check=0;
	    auto it=vp.begin();
	    for(it;it!=vp.end();it++)
        {
            if(it->second==(++it)->second)
            {
                check=-1;
                break;
            }
            else
            {
                arr[it->second]=it->first;
            }
        }
        if(check==-1)
        {
            cout<<-1<<endl;
        }
        else
        {

            for(int i=0;i<n;i++)
            {
                cout<<arr[i];
            }
        }


	}
	return 0;
}
