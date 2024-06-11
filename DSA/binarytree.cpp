#include<bits/stdc++.h>
using namespace std;
template<typename t>
class btnode
{
    public:
    int data;
    btnode<t>*left;
    btnode<t>*right;
    btnode(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~btnode()
    {
        delete left;
        delete right;
    }
};
int minvalue(btnode<int>* root)
{
    if(root==NULL)
    {
        return INT_MAX;
    }
    int m=root->data;

    return min(m,min(minvalue(root->left), minvalue(root->right)));
}
int maxvalue(btnode<int>* root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    int ans=root->data;
    return max(ans,max(maxvalue(root->left),maxvalue(root->right)));

}
bool ispresent(btnode<int>* root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==key)
    {
        return true;
    }


    return ispresent(root->left,key)|| ispresent(root->right,key);
}
void print(btnode<int>*root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" : ";
    if(root->left){
    cout<<"L"<<(root->left->data)<<" ";
    }
    if(root->right){
    cout<<"R"<<(root->right->data);
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}
btnode<int>* takeinput()
{
    int a;
    cout<<"enter root"<<endl;
    cin>>a;
    if(a==-1)
    {
        return NULL;
    }
    btnode<int>* root=new btnode<int>(a);
   btnode<int>* lef=takeinput();
    btnode<int>* rig=takeinput();
      root->left=lef;
      root->right=rig;

      return root;

}
btnode<int>* takeinput2()
{
    queue<btnode<int>*> q;
    int a;
    cout<<"enter root"<<endl;
    cin>>a;
    if(a==-1)
    {
        return NULL;
    }
    btnode<int>* root= new btnode<int>(a);
    q.push(root);
    while(!q.empty())
    {
        int l,r;

        btnode<int>* n1= q.front();
        q.pop();

        cout<<"enter left node of "<<n1->data<<endl;
        cin>>l;
        if(l!=-1)
        {
            btnode<int>* lef= new btnode<int>(l);
             q.push(lef);
             n1->left=lef;

        }

        cout<<"enter right node of "<<n1->data<<endl;
        cin>>r;

        if(r!=-1)
        {
        btnode<int>* rig= new btnode<int>(r);

        n1->right=rig;

        q.push(rig);

        }


    }
    return root;

}
vector<vector<int>> ordertreversal(btnode<int>* root)
{
    vector<vector<int>> v;
    vector<int> ans;
    queue<btnode<int>*> q;
    if(root==NULL)
    {
        return v;
    }
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        btnode<int>* n=q.front();
           q.pop();
        if(n==NULL)
        {
            v.push_back(ans);
            ans.clear();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{


        ans.push_back(n->data);

        if(n->left)
        {
            q.push(n->left);
        }
         if(n->right)
        {
            q.push(n->right);
        }
        }
    }
    return v;
}
void postorder(btnode<int>* root,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left,ans);
    postorder(root->right,ans);
    ans.push_back(root->data);
}
vector<int> posttraverse(btnode<int>* root)
{
    vector<int> ans;
    postorder(root,ans);
    return ans;
}
int countnodes(btnode<int>* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return countnodes(root->left)+countnodes(root->right)+1;
}
void inorder(btnode<int>*root,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
vector<int> inordertraverse(btnode<int>* root)
{
    vector<int> ans;
    inorder(root,ans);
    return ans;
}
void preorder(btnode<int>*root,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    ans.push_back(root->data);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
vector<int> preordertraverse(btnode<int>* root)
{
    vector<int> ans;
    preorder(root,ans);
    return ans;
}
int height(btnode<int>* root)
{
    if(root==NULL)
        return 0;
    int l=height(root->left);
    int r=height(root->right);
    return max(l,r)+1;
}
void countleaves(btnode<int>* root,int &ans)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        ans++;
    }
    countleaves(root->left,ans);
    countleaves(root->right,ans);
}
int countleaf(btnode<int>* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if((root->left==NULL) && (root->right==NULL))
    {
        return 1;
    }
    return countleaf(root->left)+countleaf(root->right);
}
btnode<int>* generatebt(vector<int> inorder,vector<int> pre,int instart,int inend,int prestart,int preend)
{
    if(instart>inend)
    {
        return NULL;
    }
    int rootind=-1;
    for(int i=0;i<inorder.size();i++)
    {
        if(pre[prestart]==inorder[i])
        {
            rootind=i;
            break;
        }
    }
    int leftinstart=instart;
    int leftinend=rootind-1;
    int leftprestart=prestart+1;
    int leftpreend=leftinend-leftinstart+leftprestart;
    int rightinstart=rootind+1;
    int rightinend=inend;
    int rightprestart=leftpreend+1;
    int rightpreend=preend;

    btnode<int>* root=new btnode<int>(inorder[rootind]);
     btnode<int>* lefty=generatebt(inorder,pre,leftinstart,leftinend,leftprestart,leftpreend);
     btnode<int>* righty=generatebt(inorder,pre,rightinstart,rightinend,rightprestart,rightpreend);
     root->left=lefty;
     root->right=righty;

     return root;


}
btnode<int>* generatebt2(vector<int> inorder,vector<int> postorder,int instart,int inend,int poststart,int postend)
{
    if(instart>inend)
    {
        return NULL;
    }
    int rootid=-1;
    for(int i=instart;i<=inend;i++)
    {
        if(inorder[i]==postorder[postend])
        {
            rootid=i;
            break;
        }
    }
    btnode<int>* root=new btnode<int>(inorder[rootid]);
    int leftinstart=instart;
    int leftinend=rootid-1;
    int leftpoststart=poststart;
    int leftpostend=leftinend-leftinstart+leftpoststart;
    int rightinstart=rootid+1;
    int rightinend=inend;
    int rightpoststart=leftpostend+1;
    int rightpostend=postend-1;
   btnode<int>* lefty=generatebt2(inorder,postorder,leftinstart,leftinend,leftpoststart,leftpostend);
     btnode<int>* righty=generatebt2(inorder,postorder,rightinstart,rightinend,rightpoststart,rightpostend);
     root->left=lefty;
     root->right=righty;

     return root;



}
int diameter(btnode<int>*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int op1=height(root->left)+height(root->right);
    int op2=diameter(root->left);
    int op3=diameter(root->right);
    return max(op1,max(op2,op3));
}
pair<int,int> dheight(btnode<int>* root)
{
    if(root==NULL)
    {
        pair<int,int> p;
        p.first=0;
        p.second=0;
        return p;
    }
    pair<int,int> lefth=dheight(root->left);
    pair<int,int> righth=dheight(root->right);
    int lh=lefth.first;
    int rh=righth.first;
    int ld=lefth.second;
    int rd=righth.second;
    int height=1+max(rh,lh);
    int diameter=max(rh+lh,max(ld,rd));
    pair<int,int> p;
    p.first=height;
    p.second=diameter;
    return p;
}
bool nodetoroot(btnode<int>* root,int key,vector<int> &v)
{
    if(root==NULL)
    {
        return false;
    }
    v.push_back(root->data);
    if(root->data==key)
    {
        return true;
    }
    bool a=nodetoroot(root->left,key,v);
    bool b=nodetoroot(root->right,key,v);
    if(a||b)
    {
        return true;
    }
    v.pop_back();
    return false;
}
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1  -1 -1
int main()
{
    btnode<int>* root=takeinput2();
   /*btnode<int>* root=new btnode<int>(1);
    btnode<int>* n1=new btnode<int>(2);
    btnode<int>* n2=new btnode<int>(3);
    root->left=n1;
    root->right=n2;*/
    print(root);
    vector<int> v;
    if(nodetoroot(root,81,v))
    {
        for(auto it:v)
        {
            cout<<it<<"  ";
        }
        cout<<endl;

    }
    else
    {
        cout<<"absent"<<endl;
    }
    pair<int,int> p=dheight(root);
    cout<<p.first<<"  "<<p.second<<endl;
   /* vector<vector<int>> vec=ordertreversal(root);
    for(auto it:vec)
    {
        for(auto ite:it)
        {
            cout<<ite<<" ";
        }
        cout<<endl;
    }*/
    /*cout<<countnodes(root)<<endl;
    vector<int> sol;
    sol=preordertraverse(root);
    for(auto ite:sol)
        {
            cout<<ite<<" ";
        }
        cout<<endl;

        cout<<height(root)<<endl;
        cout<<ispresent(root,100)<<endl;
        cout<<ispresent(root,3)<<endl;
        cout<<minvalue(root)<<endl;
        cout<<maxvalue(root)<<endl;*/
        //int abc=0;
        //countleaves(root,abc);
        //cout<<abc<<endl;
        /*vector<int> in,pre;
        in.push_back(9);
         in.push_back(3);
          in.push_back(15);
           in.push_back(20);
            in.push_back(7);
            pre.push_back(9);
             pre.push_back(15);
              pre.push_back(7);
               pre.push_back(20);
                pre.push_back(3);
                btnode<int>* newroot=generatebt2(in,pre,0,4,0,4);
                print(newroot);*/
}
