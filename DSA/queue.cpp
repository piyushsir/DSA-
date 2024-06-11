#include<bits/stdc++.h>
using namespace std;
class queues
{
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;
public:
    queues(int c)
    {
        capacity=c;
        arr=new int[capacity];
        front=-1;
        rear=0;
        size=0;
    }
    void push(int a)
    {
        if(size==capacity)
        {
            int *newarr=new int[2*capacity];
            int j=0;
            for(int i=front;i<capacity;i++)
            {
                newarr[j]=arr[i];
                j++;
            }
            for(int i=0;i<front;i++)
            {
                newarr[j]=arr[i];
                j++;
            }
              rear=capacity;
            capacity=2*capacity;
            front=0;
            delete []arr;
            arr=newarr;

        }
        if(front==-1)
        {
            front++;
        }
        arr[rear]=a;
        rear=(rear+1)%capacity;
        size++;
    }
    void pop()
    {
         if(isempty())
        {
            cout<<"underflow"<<endl;
            return;
        }
        front=(front+1)%capacity;
        size--;
    }
    int fronte()
    {
        if(isempty())
        {
            cout<<"no element"<<endl;
            return 0;
        }
        return arr[front];
    }
    int sizee()
    {
        return size;
    }
    bool isempty()
    {
        return size==0;

    }

};
int main()
{
    queues q(2);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(110);
    q.push(210);
    q.push(310);
    q.push(410);
    q.push(510);
        cout<<q.sizee()<<endl;
        int a=q.sizee();
       for(int i=0;i<a;i++)
       {
           cout<<q.fronte()<<endl;
           q.pop();
       }
       cout<<q.sizee()<<endl;
       cout<<q.isempty()<<endl;
}
