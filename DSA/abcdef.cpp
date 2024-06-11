#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int modulo=998244353;
int sumofproduct(vector<int> v)
{
       v.push_back(0);
	    int count=0;
	    int ans=0;
	    for(int i=0;i<=v.size();i++)
	    {
	        if(v[i]==1)
	        {
	            count++;
	        }
	        else
	        {
	            ans+=(count*(count+1))/2;
	            count=0;
	        }

	    }
	    return ans;
}
ll fact(ll n)
{
    if(n==1)
    {
        return 1;
    }
    return ((n%modulo)*((fact(n-1))%modulo));
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector<int> binarr;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        binarr.push_back(a);
	    }
	    int sum=0;
	    vector<vector<int>> bigvec;
	    sort(binarr.begin(),binarr.end());
	    do
	    {
	        bigvec.push_back(binarr);
	    }
	    while(next_permutation(binarr.begin(),binarr.end()));
	    for(auto it:bigvec)
	    {
	        sum=sum+sumofproduct(it);
	    }
	    ll factans=fact(n);
	    ll abc=(factans/bigvec.size());
	    cout<<sum*abc<<endl;

	}
	return 0;
}
