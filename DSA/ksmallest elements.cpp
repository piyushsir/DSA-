#include<bits/stdc++.h>
using namespace std;
using namespace std;
class node{
public:
    int data;
    node*next;
    node()
    {
        next=NULL;
    }
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
    };
void print(node*head)
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
cout<<endl;
    }
void print2(node *head)
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
node* takeinput()
{
    int data;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    while(data!=-1)
    {
        node *n=new node(data);

        if(head==NULL && tail==NULL)
        {
            tail=n;
            head=n;
        }
        else
        {
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
auto cmp=[](node*a,node*b)
{
    return a->data>b->data;
};
/*void ksmall(int*v,int n,int k)
{
    priority_queue<int> pq;
    for(int i=0;i<k;i++)
    {
        pq.push(v[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(pq.top()>v[i])
        {
            pq.pop();
            pq.push(v[i]);
        }
    }

 while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}*/
int main()
{
    int arr[]={1,6,4,3,0,5,2};
   //ksmall(arr,7,3);
   priority_queue<node*,vector<node*>,decltype(cmp)> p(cmp);
   node*a=new node(10);
   node*b=new node(4);
   node*c=new node(3);
   p.push(a);
   p.push(b);
   p.push(c);
  cout<<p.top()->data;

}
