#include<bits/stdc++.h>
using namespace std;
void insertat(stack<int> &s,int x)
{
    if(s.size()==0||s.top()<x)
    {
        s.push(x);
    }
    else
    {
        int p=s.top();
        s.pop();
        insertat(s,x);
        s.push(p);
    }
}
void sortstk(stack<int> &s)
{
    if(s.size()>0)
    {
        int a=s.top();
        s.pop();
        sortstk(s);
        insertat(s,a);
    }
}
int main()
{
    cout<<"enter no of elements"<<endl;
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    sortstk(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}
