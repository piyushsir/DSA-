#include <bits/stdc++.h>
using namespace std;
void copypush()
{
    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    bool check=true;
	    while(n>0)
	    {
	        if(n%2==1)
	        {
	            n--;
	        }
	        else
	        {
	            int mid=n/2-1;
	            if(s.substr(0,mid+1) != s.substr(mid+1,n-mid+1))
	            {
	                cout<<"no"<<endl;
	                return;
	            }
	            else
	            {
	                n/=n;
	            }


	        }

	    }
	    cout<<"yes"<<endl;
	    return;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{

	       copypush();
	}
	return 0;
}
