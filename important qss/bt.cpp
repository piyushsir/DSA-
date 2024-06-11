#include<bits/stdc++.h>
using namespace std;
class btnode
{
public:
    int data;
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
    int d;
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
        int l;
        cin>>l;
        if(l!=0)
        {
            btnode* cl=new btnode(l);
            tmp->left=cl;
            q.push(cl);
        }

         cout<<"enter right child of "<<tmp->data<<endl;
        int r;
        cin>>r;
        if(r!=0)
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
void morris_inorder(btnode* root)
{
    btnode* curr=root;
    while(curr!=NULL){
    if(curr->left==NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->right;
    }
    else
    {
        btnode* n=curr->left;
        while(n->right!=NULL && n->right!=curr)
        {
            n=n->right;
        }
        if(n->right==NULL)
        {
            n->right=curr;
            curr=curr->left;
        }
        else
        {
            n->right=NULL;
          cout<<curr->data<<" ";
            curr=curr->right;
        }
    }
    }
}
void morris_preorder(btnode* root)
{
    btnode* curr=root;
    while(curr!=NULL){
    if(curr->left==NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->right;
    }
    else
    {
        btnode* n=curr->left;
        while(n->right!=NULL && n->right!=curr)
        {
            n=n->right;
        }
        if(n->right==NULL)
        {
            n->right=curr;
             cout<<curr->data<<" ";
            curr=curr->left;
        }
        else
        {
            n->right=NULL;

            curr=curr->right;
        }
    }
    }
}
void morris_postorder(btnode* root)
{
    btnode* curr=root;
    while(curr!=NULL){
    if(curr->right==NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->left;
    }
    else
    {
        btnode* n=curr->right;
        while(n->left!=NULL && n->left!=curr)
        {
            n=n->left;
        }
        if(n->left==NULL)
        {
             cout<<curr->data<<" ";
            n->left=curr;

            curr=curr->right;
        }
        else
        {
            n->left=NULL;

            curr=curr->left;
        }
    }
    }
}


int maxsum(btnode* root)
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
}
int main()
{
    btnode* ans=takeinput();
    /*print(ans);
    cout<<endl;
    pre_order(ans);
    cout<<endl;
    post_order(ans);
    cout<<endl;*/
    in_order(ans);
    cout<<endl;
    //cout<<maxsum(ans);
    morris_inorder(ans);
    cout<<endl;
    morris_preorder(ans);
  cout<<endl;
  morris_postorder(ans);

}
