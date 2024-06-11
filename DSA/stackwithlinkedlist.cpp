#include<bits/stdc++.h>
using namespace std;
template<typename t>
class node
{
    public:
    t data;
    node<t>*next;
    node()
    {
        next=NULL;
    }
    node(t data)
    {
        this->data=data;
        next=NULL;
    }
};
template<typename t>
class stacks
{
    node<t>*head;
    int pos;
public:
    stacks()
    {
        head=NULL;
        pos=0;
    }
    void push(t data)
    {
        if(head==NULL)
        {
            node<t>*n=new node<t>(data);
            head=n;
        }
        else
        {
            node<t>*n=new node<t>(data);
            n->next=head;
            head=n;
        }
        pos++;
    }
    int size()
    {
        return pos;
    }
    t top()
    {
        return head->data;
    }
    bool isempty()
    {
        return pos==0;
    }
    void pop()
    {
        node<t>*temp=head;
        head=head->next;
        pos--;
        temp->next=NULL;
        delete temp;
    }
};
int main()
{
    stacks<string> a;
    a.push("bb");
    a.push("aa");
    a.push("cc");
    cout<<a.size()<<endl;
    cout<<a.top()<<endl;
    a.pop();
    cout<<a.top()<<endl;
a.pop();
    cout<<a.top()<<endl;


}
