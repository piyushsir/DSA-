#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
    vector<int> v;

    int visited[n];

    for(int i=0; i<n; i++){

        if(visited[i]!=1){
           int count = 1;
           for(int j=i+1; j<n; j++){
              if(arr[i]==arr[j]){
                 count++;
                 visited[j]=1;
              }
            }

            v.push_back(count);
         }
     }


     int max=-1111;
	    if(v.size()==1)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        for(int i=0;i<v.size();i++)
	        {
	            if(v[i]>max)
	            {
	                max=v[i];
	            }
	        }
	        cout<<n-max<<endl;
	    }
	}

    return 0;

}
