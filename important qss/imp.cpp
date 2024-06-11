#include<bits/stdc++.h>
using namespace std;
void sol(stack<int> &st,int ins,int b)
{
    int tmp;
    if(st.empty() || st.top()==b)
    {
        st.push(ins);
        return;
    }

    tmp=st.top();
    st.pop();

    sol(st,ins,b);
    st.push(tmp);

}
void remove1(stack<int> &s,int a)
{
    if(s.top()==a)
    {
        s.pop();
        return;
    }
    int sum=s.top();
    s.pop();
    remove1(s,a);
    s.push(sum);
}
int main()
{
    cout<<"run"<<endl;
    stack<int> s1;
    s1.push(6);
     s1.push(4);
     s1.push(1);
     s1.push(2);
     s1.push(5);
     s1.push(3);
     int arr[]={12,15,116,13,11,14,0};
     int arr2[]={6,4,1,2,5,3};

     int j=0;
     for(int i=6;i>0;i--)
     {

         sol(s1,arr[i-1],arr[i]);
         remove1(s1,arr2[j]);
         j++;

     }
     while(!s1.empty())
     {
         cout<<s1.top()<<" ";
         s1.pop();
     }
}


