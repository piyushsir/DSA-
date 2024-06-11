#include<bits/stdc++.h>
using namespace std;
class avlnode
{
public:
    int data;
    avlnode*left;
    avlnode*right;
    avlnode(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
int height(avlnode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
bool isbalanced(avlnode* root)
{
    if(root==NULL)
    {
        return true;
    }
    if(!isbalanced(root->left))
    {
        return false;
    }
    if(!isbalanced(root->right))
    {
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(rh-lh)>=2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int balfac(avlnode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ans=height(root->left)-height(root->right);
    if(ans!=1 && ans!=-1 && ans!=0)
    {
        return ans;
    }
}
avlnode* leftrotate(avlnode* root)
{
    avlnode* a=root->right;
    avlnode*b=a->left;
    a->left=root;
    root->right=b;
    return a;
}
avlnode* rightrotate(avlnode* root)
{
    avlnode* a=root->left;
    avlnode*b=a->right;
    a->right=root;
    root->left=b;
    return a;
}
avlnode* takeinput()
{
    cout<<"enter root"<<endl;
    int d;
    cin>>d;
    queue<avlnode*> q;
    avlnode* root=new avlnode(d);
    q.push(root);
    while(!q.empty())
    {
        avlnode*tmp=q.front();
        q.pop();
        int chl=0;
        int chr=0;
        for(int i=0;i<2;i++)
        {
            cout<<"enter root of"<<tmp->data<<endl;
            int n;
            cin>>n;
            if(n==-1)
            {
                continue;
            }
            avlnode*child=new avlnode(n);
            q.push(child);
            if(n>=tmp->data)
            {
                if(chr==0)
                tmp->right=child;
                else
                {
                    if(tmp->right->data>n)
                    {
                        tmp->right->left=child;
                    }
                    else
                    {
                        tmp->right->right=child;
                    }
                }
                chr++;
                chl=0;


            }
            else
            {
                if(chl==0)
                tmp->left=child;
                else
                {
                    if(tmp->left->data>n)
                    {
                        tmp->left->right=child;
                    }
                    else
                    {
                        tmp->left->left=child;
                    }
                }
                chl++;
                chr=0;
                q.push(child);
            }

            if(!isbalanced(root))
            {
                int bf=balfac(root);
                if(bf>1 && child->data<root->left->data)
                {
                    return rightrotate(root);
                }
                if(bf>1 && child->data>root->left->data)
                {
                    root->left=leftrotate(root->left);
                    return rightrotate(root);
                }
                 if(bf<-1 && child->data>root->right->data)
                {
                    return leftrotate(root);
                }
                if(bf<-1 && child->data<root->right->data)
                {
                    root->right=rightrotate(root->right);
                    return leftrotate(root);
                }
            }


        }
    }
    return root;
}
void level_print(avlnode*root)
{
    queue<avlnode*> q;
    q.push(root);
    while(!q.empty())
    {
        avlnode* tmp=q.front();
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
    avlnode *ans=takeinput();
    level_print(ans);
}
