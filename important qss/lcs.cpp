#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{

	    int n;
	    cin>>n;
	    string s1,s2;
	    cin>>s1>>s2;
	    int j=0;
	    map<char,int> m1,m2;

	    for(int i=0;i<n;i++)
	    {
	        m1[s1[i]]++;
	        m2[s2[i]]++;
	    }
	    for(auto it=m2.begin();it!=m2.end();it++)
	    {
	      if(m1[it->first]!=NULL)
          {
              cout<<max(it->second,m1[it->first])<<endl;
          }
	    }
	}
	return 0;
}

