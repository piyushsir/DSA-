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
	    string s;
	    cin>>s;
	    stack<char> st;
	    for(int i=0;i<n;i++)
	    {
	        st.push(s[i]);
	    }
	    int ans=0;
	    while(st.size()!=1)
	    {
	        int tmp=st.top();
	        st.pop();
	        int tmp2=st.top();
	        if(tmp2>tmp)
	        {
	            ans++;
	        }

	    }
	    cout<<ans<<endl;
	}
	return 0;
}

