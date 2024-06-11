/*/*#include<bits/stdc++.h>
using namespace std;
void subsetq(int arr[],int n, vector<int> &v)
{
    if(n==0)
    {
        for(auto it:v)
        {
            cout<<it;
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[0]);
    subsetq(arr+1,n-1,v);
    v.pop_back();
    subsetq(arr+1,n-1,v);

}
int main()
{
    vector<int> v;
int arr[3]={1,2,3};
subsetq(arr,3,v);

}

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class Stack{
    node *head;
    public:
    Stack(){
        head = NULL;
    }
    void push(int d){
        node *t;
        node *temp;
        t = new node;
        t->data = d;
        t->next = NULL;
        if(head==NULL){
            head = t;
        }
        else{
            t->next = head;
            head = t;
        }
    }
    int  pop(){
        int x = -1;node *t;
        if(head==NULL){
            cout<<"Stack is Empty";
        }
        t= head;
        x= head->data;
        head = head->next;
        delete t;
        return x;
    }
    int isEmpty(){
        if(head==NULL){
            return 1;
        }
        else{
            return 0;
        }
    }
    int top(){

        return head->data;
    }
    void display(){
        node *t = head;
        while(t){
            cout<<t->data<<" ";
            t = t->next;
        }
        cout<<endl;
    }
};
void sortedinsert(Stack &s1 ,int x){
    int y;
    if(s1.isEmpty()==1 || x<s1.top()){
        s1.push(x);
        return ;
    }
    y = s1.pop();
    sortedinsert(s1,x);
    s1.push(y);
}
void SortStack(Stack &s1){

    if(s1.isEmpty()!=1){
        int x = s1.pop();

        SortStack(s1);
        sortedinsert(s1,x);

    }
}
int main(){

    Stack s1;
    s1.push(-2);
    s1.push(-5);
    s1.push(9);
    s1.push(-7);
    s1.push(3);
    cout<<"Normal stack"<<endl;
    s1.display();
    SortStack(s1);
    s1.display();
    return 0;
}
*/
/*#include<iostream>
#include<stack>
using namespace std;

void insert_at_last(stack<int> &s, int value)
{
   if (s.empty())
   {
    s.push(value);
    return;
   }

  int x = s.top();
  s.pop();

  insert_at_last(s,value);

  s.push(x);



}

void Reverse(stack<int> &s1)
{

    if (s1.empty())
    {

        return;
    }

    int num  = s1.top();
    s1.pop();

    Reverse(s1);

    insert_at_last(s1,num);
}


int main(){
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

int q  = s.size();
for (int  i = 0; i <q ; i++)
{
    int x = s.top();
    s.pop();
    cout<<x<<endl;

}
cout<<endl;

cout<<"after reverse"<<endl;


Reverse(s);

for (int  i = 0; i <q; i++)
{
    int x = s.top();
    s.pop();
    cout<<x<<endl;

}

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int n,int key)
{
    int s=0;
    int e=(n-1);
    while(s<e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}
int firstindex(int arr[],int n,int key,bool a)
{
    int ans=-1;
    int s=0;
    int e=(n-1);
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            if(a==true)
            e=mid-1;
            else{
                s=mid+1;
            }
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int noof(int arr[],int n,int key)
{
    int a=firstindex(arr,n,key,true);
    int b=firstindex(arr,n,key,false);
    return b-a+1;
}
int searchsorted(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[s]<=arr[mid])
        {
            if(key>=arr[s] && key<=arr[mid])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        else if(arr[mid]<=arr[e])
        {

            if(key<=arr[e] && key>=arr[mid])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
}
int me(int arr[],int n)
{
    int a=arr[0];
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==a)
        {
            count++;
        }
        else
        {
            count--;
            if(count==0)
            {
                a=arr[i];
                count=1;
            }
        }
    }

        return a;

}
int kadane(int arr[],int n)
{
    int sum=0;
    int mxsum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(mxsum<sum)
        {
            mxsum=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return mxsum;
}
int main()
{
    int arr[5]={3,4,-3,-1,3};
    //cout<<firstindex(arr,5,5,true)<<endl;
     //cout<<firstindex(arr,5,5,false)<<endl;
  //cout<<noof(arr,5,5);
  //cout<<searchsorted(arr,5,2);
  cout<<kadane(arr,5);
}
*/
#include<bits/stdc++.h>
using namespace std;

void remove_string(string &str,char a,int i)
{
  if(str[i]==NULL)
  {
      return;
  }
  if(str[i]==a)
  {
      for(int j=i;j<str.size();j++)
      {
          str[j]=str[j+1];
      }
  }
  remove_string(str,a,i+1);

}


int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin , str);
    char sm='a';
    for(int i=0;i<str.size();i++)
    {
       sm=max(sm,str[i]);
    }
    remove_string(str,sm,0);
    cout<<str<<endl;
    return 0;
}
