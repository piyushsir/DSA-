#include <iostream>
using namespace std;
typedef long long ll;
ll power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    return a*power(a,b-1);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>x>>n;
	    cout<<power(2,n-1)*x<<endl;
	}
	return 0;
}
