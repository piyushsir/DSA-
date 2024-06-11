#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    map<int,ll> m;
	    m[1]=0;
	    m[2]=0;
	    for(int i=0;i<2*n;i++)
	    {
	        ll a;
	        cin>>a;
	        if(a%2==0)
	        {
	            m[1]=m[1]+1;
	        }
	        else
	        {
	            m[2]=m[2]+1;
	        }
	    }
	   /* auto it=m.begin();
	    ll mi=min(it->second,++it->second);
	    cout<<abs(n-mi)<<endl;*/
	    auto it=m.begin();
	    ll a=it->second;
	    it++;
	    ll b =it->second;
	    int c=min(a,b);
	    cout<<abs(n-c)<<endl;

	}
	return 0;
}
