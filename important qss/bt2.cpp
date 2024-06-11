#include<bits/stdc++.h>
using namespace std;
class btnode
{
public:
    char data;
    btnode* left;
    btnode* right;
    btnode(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
btnode* takeinput()
{
    char d;
    cout<<"enter root"<<endl;
    cin>>d;
    btnode* root=new btnode(d);
    queue<btnode*> q;
    q.push(root);
    while(!q.empty())
    {
        btnode* tmp=q.front();
        q.pop();
        cout<<"enter left child of "<<tmp->data<<endl;
        char l;
        cin>>l;
        if(l!='0')
        {
            btnode* cl=new btnode(l);
            tmp->left=cl;
            q.push(cl);
        }

         cout<<"enter right child of "<<tmp->data<<endl;
        char r;
        cin>>r;
        if(r!='0')
        {
            btnode* cr=new btnode(r);
            tmp->right=cr;
            q.push(cr);
        }

    }
    return root;
}

void pre_order(btnode* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
void post_order(btnode* root)
{
    if(root==NULL)
    {
        return;
    }
    pre_order(root->left);
    pre_order(root->right);
    cout<<root->data<<" ";

}
void in_order(btnode* root)
{
    if(root==NULL)
    {
        return;
    }

    pre_order(root->left);
    cout<<root->data<<" ";
    pre_order(root->right);
}
void print(btnode* root)
{
    queue<btnode*> q;
    q.push(root);
    while(!q.empty())
    {
        btnode* tmp=q.front();
        cout<<tmp->data<<" : ";
        q.pop();
        if(tmp->left!=NULL)
        {
            cout<<"L"<<tmp->left->data<<" ";
            q.push(tmp->left);
        }
        if(tmp->right!=NULL)
        {
            cout<<"R"<<tmp->right->data<<" ";
            q.push(tmp->right);
        }
        cout<<endl;
      }
}
void level_print(btnode* root)
{
    queue<btnode*> q;
    q.push(root);
    while(!q.empty())
    {
        btnode* tmp=q.front();
        cout<<tmp->data;
        q.pop();
        if(tmp->left!=NULL)
        {
            q.push(tmp->left);
        }
        if(tmp->right!=NULL)
        {
            q.push(tmp->right);
        }

      }
      cout<<endl;
}
void klevel(btnode*root,int k)
{
    if(k==0)
    {
        cout<<root->data;
    }
    klevel(root->left,k-1);
    //klevel(root->right,k-1);

}
void spiral_print(btnode* root)
{
    stack<btnode*> q1;
    stack<btnode*> q2;
    q1.push(root);
    while(!q1.empty() || !q2.empty())
    {
        while(!q1.empty())
        {
           btnode* tmp=q1.top();
           cout<<tmp->data;
           q1.pop();


            if(tmp->right!=NULL)
           {
            q2.push(tmp->right);
           }
           if(tmp->left!=NULL)
           {
             q2.push(tmp->left);
           }


        }
        while(!q2.empty())
        {
           btnode* tmp=q2.top();
           cout<<tmp->data;
           q2.pop();
           if(tmp->left!=NULL)
           {
            q1.push(tmp->left);
           }
           if(tmp->right!=NULL)
           {
             q1.push(tmp->right);
           }


        }

       }
      cout<<endl;
}
/*1
2
3
4
5
6
7
0
8
9
0
0
0
10
11
12
13
0
14
15
0
16
17
0
0
0
0
0
0
0
0
0
0
0
0*/
/*int maxsum(btnode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int sum1=0;
    int sum2=0;
    sum1+=maxsum(root->left);
    sum2+=maxsum(root->right);
    return max(sum1,sum2)+root->data;
}*/
int main()
{
    btnode* ans=takeinput();
    spiral_print(ans);
    level_print(ans);
    print(ans);
    cout<<endl;
    pre_order(ans);
    cout<<endl;
    post_order(ans);
    cout<<endl;
    in_order(ans);
    cout<<endl;
   // cout<<maxsum(ans);

}

