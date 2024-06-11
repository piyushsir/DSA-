#include<iostream>
using namespace std;
int pow(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    int a=pow(x,n-1);
    return x*a;
}
double gp(int k)
{
    if(k==0)
    {
        return 1;
    }///given gp 1+1/2+1/2*2.....
    double a=gp(k-1);
    return a+(1.0/pow(2,k));

}
int main()
{
    cout<<gp(3);
}
