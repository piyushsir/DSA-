#include<iostream>
#include<math.h>
using namespace std;
int prime(int n)
{

    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void all(int n)
{
    for(int i=2;i<n;i++)
    {
        if(prime(i))
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
  all(55);

}

