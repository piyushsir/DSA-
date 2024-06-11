#include<bits/stdc++.h>
using namespace std;
class stacks
{
    int *arr;
    int position;
    int capacity;
public:
    stacks()
    {
        capacity=4;
        arr=new int[capacity];
        position=0;
    }
    stacks(int cap)
    {
        capacity=cap;
        arr=new int[capacity];
        position=0;
    }
    void push(int data)
    {
        if(position==capacity)
        {

            int *arr2=new int[2*capacity];
            for(int i=0;i<position;i++)
            {
                arr2[i]=arr[i];
            }
            delete []arr;
            arr=arr2;
        }
        arr[position]=data;
        position++;
    }
    void pop()
    {
        if(position ==0)
        {
            cout<<"underflow"<<endl;
            return;
        }
        position--;
    }
    bool isempty()
    {
        return position==0;
    }
    int top()
    {
        if(isempty())
        {
            cout<<"empty"<<endl;
        }
        return arr[position-1];
    }
    int sizee()
    {
        return position;
    }

};
int main()
{
    stacks s(5);
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     s.push(5);
     s.push(6);
     s.push(7);
     s.push(8);
     s.push(9);
     cout<<s.sizee()<<endl;
     cout<<s.top()<<endl;
     s.pop();
     cout<<s.top()<<endl;
     s.pop();
     cout<<s.top()<<endl;
     s.pop();
     cout<<s.top()<<endl;
     s.pop();
     cout<<s.top()<<endl;
     cout<<s.sizee();

}
