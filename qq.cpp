#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int l,r;
	    cin>>l>>r;
	    int n = r-l+1;
	    //cout<<n<<endl;
	    if(n%2==0)
	    {
	        vector<int> even;
	        vector<int> odd;
	        for(int i=l;i<=r;i++)
	        {
	            if(i%2==0)
	            {
	                even.push_back(i);
	            }
	            else
	            {
	                odd.push_back(i);
	            }
	        }

	        if(l%2==0)
	        {
	            int j=0;
	            int k=0;
	           for(int i=0;i<n;i++)
	           {
	               if(i%2==0)
	               {

	                   cout<<odd[j]<<" ";
	                   j++;
	               }
	               else
	               {
	                   cout<<even[k]<<" ";

	                   k++;
	               }
	           }
	        }
	        else
	        {
	            int j=0;
	            int k=0;
	           for(int i=0;i<n;i++)
	           {
	               if(i%2==0)
	               {

	                   cout<<even[j]<<" ";
	                   j++;
	               }
	               else
	               {
	                   cout<<odd[k]<<" ";

	                   k++;
	               }
	           }
	        }

	    }
	    else
	    {
	        if(l%2==0)
	        {
	            cout<<-1<<endl;
	        }
	        else
	        {
	             vector<int> even;
	             vector<int> odd;
	             for(int i=l;i<=r;i++)
	             {
	                if(i%2==0)
	                {
	                    even.push_back(i);
	                }
	                else
	                {
	                    odd.push_back(i);
	                }
	             }

	            int j=0;
	            int k=0;
	            vector<int> ans;
	            for(int i=0;i<n-1;i++)
	            {
	               if(i%2==0)
	               {

	                   ans.push_back(even[j]);
	                   j++;
	               }
	               else
	               {
	                   ans.push_back(odd[k]);
	                   k++;
	               }
	           }

	           int num=odd[odd.size()-1];
	           int num2=-1;
	           int b=0;
	           for(int i=l;i<=r;i++)
	           {
	               if(__gcd(num,i)==1)
	               {
	                   if(__gcd(ans[b],num)==1)
	                   {
	                       num2=0;
	                       ans.push_back(num);
	                       swap(ans[b],ans[ans.size()-1]);
	                       break;
	                   }
	               }
	               b++;
	           }
	           if(num2==-1)
	           {
	               cout<<-1<<endl;
	           }
	           else
	           {
	               for(int i=0;i<ans.size();i++)
	               {
	                   cout<<ans[i]<<" ";
	               }
	               cout<<endl;
	           }

	        }
	    }
	}

}

