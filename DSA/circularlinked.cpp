#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node*next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
node*takeinput()
{
    int data;
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1)
    {
        node* n=new node(data);
        if(head==NULL&& tail==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
            tail->next=n;
            tail=n;
            tail->next=head;
        }
        cin>>data;
    }
    return head;
}
void print(node* head)
{
    node*temp=head;
    cout<<head->data<<" ";
    head=head->next;
    while(temp!=head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int len(node*head)
{
    int count=1;
    node*temp=head->next;
    while(temp!=head)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
node*deletenode(node*head,int i)
{
    if(i==0)
    {
        node*temp2=head;
        node*temp=temp2->next;
        node*ac=head->next;
        while(temp->next!=temp2)
        {
            temp=temp->next;
        }
        temp->next=ac;

        return ac;
  }
    int count=1;
    node*temp3=head;
    while(count<=i-1)
    {
        count++;
        temp3=temp3->next;
    }

    temp3->next=temp3->next->next;
    return head;

}
node*ans(int no,int m)
{
    node* head=NULL;
    node* tail=NULL;
    int data;
    cin>>data;
    node*n=new node(data);
    head=n;
    tail=n;
    tail->next=head;

    for(int i=0;i<no-1;i++)
    {
        int data;
       cin>>data;

        node*n=new node(data);

            tail->next=n;
            tail=n;
            tail->next=head;

    }
    for(int i=0;i<no-1;i++)
    {
      for(int i=0;i<m-1;i++)
      {
          tail=tail->next;
      }
      tail->next=tail->next->next;
    }
    return tail;
}

int main()
{
   /* node*a=takeinput();
    print(a);
    cout<<len(a);
    int i;
    cout<<"enter"<<endl;
    cin>>i;
    node*b=deletenode(a,i);
    print(b);*/
    node*abc=ans(14,2);
    print(abc);

}
