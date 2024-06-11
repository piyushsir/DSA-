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
btnode* insertnode(btnode* root,int d)
{
    if(root==NULL)
    {
        btnode*n= new btnode(d);
        root=n;
        return root;
    }
    else if(root->data>d)
    {
        root->left=insertnode(root->left,d);
    }
    else
    {
        root->right=insertnode(root->right,d);
    }
    return root;
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
int main()
{
    btnode* a=NULL;
    a=insertnode(a,4);
    print(a);

}
