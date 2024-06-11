#include<bits/stdc++.h>
using namespace std;
template<typename t>
class stacks
{
    t *arr;
    int nextpos;
    int capacity;
    public:
        stacks()
        {
            capacity=4;
            arr=new t[capacity];
            nextpos=0;
        }
        void push(t data)
        {
            if(nextpos==capacity)
            {
                t *arr2=new t[2*capacity];
                for(int i=0;i<nextpos;i++)
                {
                    arr2[i]=arr[i];
                }
                delete []arr;
                arr=arr2;
            }
            arr[nextpos]=data;
            nextpos++;
        }
        void pop()
        {
            if(nextpos==0)
            {
                cout<<"underflow"<<endl;
            }
            nextpos--;
        }
        int sizee()
        {
            return nextpos;
        }
        bool isempty()
        {
            return nextpos==0;
        }
        t top()
        {
            if(isempty())
            {
                cout<<"no element"<<endl;
            }
            return arr[nextpos-1];
        }

};
int main()
{
    /*stacks<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.sizee()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;*/
    stacks<string> s2;
    s2.push("hiii");
    s2.push("camela");
    s2.push("pablito");
    cout<<s2.sizee()<<endl;
    cout<<s2.top()<<endl;
    s2.pop();
    cout<<s2.top()<<endl;
s2.pop();
    cout<<s2.top()<<endl;

}
