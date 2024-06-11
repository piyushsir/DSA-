#include<bits/stdc++.h>
using namespace std;
template<typename t>
class node
{
public:
    t data;
    node*next;
    node(t data)
    {
        this->data=data;
        next=NULL;
    }
};
template<typename t>
class queues
{
    node<t>*head;
    node<t>*tail;
    int size;
public:
    queues()
    {
        size=0;
        head=NULL;
        tail=NULL;
    }
    void push(t data)
    {
        node<t>*n=new node<t>(data);
        if(head==NULL)
        {
            head=n;
            tail=n;
            size++;
            return;
        }
        tail->next=n;
        tail=n;
        size++;
    }
    t front()
    {
        return head->data;
    }
    void pop()
    {
        if(head==NULL)
        {
            cout<<"underflow"<<endl;
        }
        node<t> *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        size--;
    }
    bool isempty()
    {
        return size==0;
    }
    int getsize()
    {
        return size;
    }

};
int main()
{
    queues<string> q;
    q.push("abc");
    q.push("def");
    q.push("ghr");
    q.push("hi");
    q.push("bi");
    cout<<q.getsize()<<endl;
    cout<<q.front()<<endl;
    q.pop();
     cout<<q.front()<<endl;
     q.pop();
      cout<<q.front()<<endl;
       cout<<q.getsize()<<endl;
        cout<<q.isempty()<<endl;
}
