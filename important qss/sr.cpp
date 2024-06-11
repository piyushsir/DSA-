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
	   int arr[n];
	    for(int i=0;i<n;i++)
	    {
	       cin>>arr[i];
	    }
	    int count=0;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i-1]!=arr[i])
	        {
	            count++;
	        }
	       else
	       {
	           v.push_back(arr[i]);
	       }
	    }
	    if(count==0)
        {
            v.push_back(arr[0]);
        }

	}
	return 0;
}

