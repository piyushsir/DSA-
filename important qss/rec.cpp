#include<bits/stdc++.h>
using namespace std;
int pow(int n,int m)
{
    if(m==0)
    {
        return 1;
    }
    return n*pow(n,m-1);
}
void print(int n)
{
    if(n==0)
    {
        return;
    }

    print(n-1);
    cout<<n<<" ";

}
int ndig(int n)
{
    if(n==0)
    {
        return 0;
    }
    return ndig(n=n/10)+1;

}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%10 +sum(n/10);
}
int mul(int n,int m)
{
    if(m==0)
    {
        return 0;

    }
    return n+mul(n,m-1);
}
void cnt(int n,int &count)
{

    if(n==0)
    {
        return ;
    }
    if(n%10==0)
    {
        count++;
    }

    cnt(n/10,count);

}
int main()
{
    //cout<<pow(5,3);
    //print(7);
    //cout<<sum(21765);
    //cout<<mul(2,3);
    int count=0;
    cnt(10010,count);
    cout<<count;

}
