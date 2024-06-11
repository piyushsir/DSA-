#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,p;
	cin>>t;
	while(t--)
	{
	    cin>>p;
	    int a=p%100;
	    if(p<100)
	    {
	        if(p<=10)
	        {
	            cout<<p<<endl;
	        }
	        else
	        {
	            cout<<-1<<endl;
	        }

	    }
	    else
	    {
	        int a=p%100;
	        if(a<10)
	        {
	            cout<<a+p/100<<endl;
	        }
	        else
	        {
	            cout<<-1<<endl;
	        }
	    }
	}
	return 0;
}
