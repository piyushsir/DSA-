#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++)
        {
            int abc;
            cin>>abc;
	        v.push_back(abc);
        }
        int sum=accumulate(v.begin(),v.end(),0);
	    if((*min_element(v.begin(),v.end()))==1)
	    cout<<"chef"<<endl;
	    else{
	    if((sum-(2*n))&1)
	    cout<<"chef"<<endl;
	    else
	    cout<<"chefina"<<endl;
	    }
	}
	return 0;
}
