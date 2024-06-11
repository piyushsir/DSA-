#include<bits/stdc++.h>
using namespace std;
class treenode
{
public:
    int data;
    treenode*left;
    treenode*right;
    treenode(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
treenode* takeinput()
{
    cout<<"enter root"<<endl;
    int rootnode;
    cin>>rootnode;
    queue<treenode*> q;
    treenode* root=new treenode(rootnode);
    q.push(root);
    while(!q.empty())
    {
        treenode* tmp=q.front();
        q.pop();
        int chl=0;
        int chr=0;
        for(int i=0;i<2;i++)
        {
         cout<<"enter child of"<<tmp->data<<endl;
         int n;
         cin>>n;
         if(n==-1)
         {
             continue;
         }
         treenode* child=new treenode(n);
            if(n>=tmp->data)
            {
                //if(chr==0)
                //tmp->right=child;
                //else
                //{
                    while(tmp->right!=NULL)
                    {
                        tmp=tmp->right;
                    }
                    tmp->right=child;
                //}
                //chr++;
                //chl=0;


            }
            else
            {
                //if(chl==0)
                //tmp->left=child;
                //else
                //{
                 while(tmp->left!=NULL)
                 {
                     tmp=tmp->left;
                 }
                 tmp->left=child;
                //}
                //chl++;
                //chr=0;
            }

         q.push(child);
        }

    }
    return root;
}
int height(treenode*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
void inorder_print(treenode* root)
{
    if(root==NULL)
    {
        return;
    }else
    {
         inorder_print(root->left);
       cout<<root->data<<" ";
        inorder_print(root->right);
    }


}
void pre_print(treenode* root)
{
    if(root==NULL)
    {
        return;
    }else
    {

       cout<<root->data<<" ";
       pre_print(root->left);
        pre_print(root->right);
    }


}
void post_print(treenode* root)
{
    if(root==NULL)
    {
        return;
    }else
    {


       post_print(root->left);
        post_print(root->right);
        cout<<root->data<<" ";
    }


}
void level_print(treenode*root)
{
    queue<treenode*> q;
    q.push(root);
    while(!q.empty())
    {
        treenode* tmp=q.front();
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
bool is_balanced(treenode*root)
{
    if(root==NULL)
    {
        return true;
    }
    if(!is_balanced(root->left))
    {
        return false;
    }
    if(!is_balanced(root->right))
    {
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
treenode* in_pre(treenode*root)
{
    if(root==NULL)
    {
        return NULL;
    }
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}
treenode* deletenode(treenode* root,int d)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==d)
    {
        if(root->left==NULL && root->right==NULL)
        {
            return NULL;
        }
         if(root->left!=NULL && root->right==NULL)
        {
            root->data=root->left->data;
            root->left=deletenode(root->left,root->left->data);
        }
        if(root->left==NULL && root->right!=NULL)
        {
            root->data=root->right->data;
            root->right=deletenode(root->right,root->right->data);
        }
        if(root->left!=NULL && root->right!=NULL)
        {

            treenode*a=in_pre(root);
        root->data=a->data;
        root->left=deletenode(root->left,a->data);
        }
    }
    if(d>root->data)
    {
        root->right=deletenode(root->right,d);
    }
    else if(d<root->data)
    {
        root->left=deletenode(root->left,d);
    }
    return root;
}
treenode* insertnode(treenode* root,int d)
{
    if(root==NULL)
    {
        treenode*n= new treenode(d);
        root=n;
        return root;
    }
    if(d<root->data)
    {
        root->left=insertnode(root->left,d);
    }
    else
    {
        root->right=insertnode(root->right,d);
    }
    return root;
}
int main()
{
    /*treenode* ans=takeinput();
    level_print(ans);
   // cout<<height(ans);
    cout<<endl;
    treenode*res=deletenode(ans,3);
    inorder_print(res);
    /*if(is_balanced(ans))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }*/
    int n;
    cin>>n;
    treenode*b=NULL;
    while(n!=-1)
    {
        b=insertnode(b,n);
        cin>>n;

    }


    level_print(b);

}

