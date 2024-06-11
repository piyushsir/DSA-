#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n=4;
    int a=7;
    for(int i=n-1;i>=0;i++)
    {
        int d=d|((a<<1)&1);
        cout<<d<<" ";
        break;
    }
}


