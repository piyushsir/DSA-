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
	    vector<char> v;
	    deque<char> d;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='+' || s[i]=='-')
	        {
	             if(s[i]=='+')
	            {
	                d.push_front(s[i]);
	            }
	            else
	            {
	                d.push_back(s[i]);
	            }

	        }
	        else
	        {
	           v.push_back(s[i]);
	        }
	    }
	    sort(v.begin(),v.end(),greater<>());
	    int vs=v.size();
	    int ds=d.size();
	    int si=vs-ds;
	    for(int i=0;i<si;i++)
	    {
	        cout<<v[i];
	    }
	   for(int i=si;i<vs;i++)
	    {
	        cout<<d.front();
	        d.pop_front();
	        cout<<v[i];
	    }
	    cout<<endl;
	}

	return 0;
}
