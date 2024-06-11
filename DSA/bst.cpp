#include<bits/stdc++.h>
using namespace std;
template<typename t>
class tree
{
    public:
    t data;
    tree*left;
    tree*right;
    tree(t data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
tree<int>* takeinput()
{
    cout<<"enter root"<<endl;
    int data;
    cin>>data;
    queue<tree<int>*> q;
    if(data==-1)
    {
        return NULL;
    }
    tree<int>* root=new tree<int>(data);
    q.push(root);
    while(!q.empty())
    {
        int l,r;
        tree<int> * n=q.front();
        q.pop();
        cout<<"enter left data"<<endl;
        cin>>l;
        if(l!=-1)
        {
            tree<int>* lefty=new tree<int>(l);
            n->left=lefty;
            q.push(lefty);
        }
        cout<<"enter right data"<<endl;
        cin>>r;
         if(r!=-1)
        {
            tree<int>* righty=new tree<int>(r);
            n->right=righty;
            q.push(righty);
        }

    }
    return root;

}
void print(tree<int>* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" : ";
    if(root->left!=NULL){
    cout<<"L"<<root->left->data<<",";
    }
     if(root->right!=NULL){
    cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}
bool searching(tree<int>* root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==key)
    {
        return true;
    }
    if(root->data>key)
    {
        return searching(root->left,key);
    }
    if(root->data<key)
    {
        return searching(root->right,key);
    }

}
int findmin(tree<int>* root)
{
    if(root==NULL)
    {
        return -1;
    }
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;

}
int maxvalue(tree<int>* root)
{
    if(root==NULL)
        return -1;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
}
int range(tree<int>* root,int l,int r)
{
    if(root==NULL)
    {
        return 0;
    }
    int sum=0;
    if(root->data>=l && root->data<=r)
    {
        sum=sum+root->data;
    }
    if(root->data>r)
    {
        sum=sum+range(root->left,l,r);
    }
    else if(root->data<l)
    {
        sum=sum+range(root->right,l,r);
    }
    else
    {
        sum=sum+range(root->left,l,r)+range(root->right,l,r);
    }
    return sum;
}
 bool helper(tree<int>* root,long long minV =INT_MIN-1LL , long long maxV = INT_MAX+1LL){
        if(root==NULL) return true;

        bool left = helper(root->left, minV , root->data);
        bool right = helper(root->right, root->data, maxV);

        if(left && right && root->data>minV && root->data<maxV) return true;
        else return false;
    }
    bool isValidBST(tree<int>* root) {
        return helper(root);
    }
void validate2(tree<int>* root,vector<int> &v2)
{
    if(root==NULL)
    {
        return;
    }
    validate2(root->left,v2);
    v2.push_back(root->data);
    validate2(root->right,v2);
}
bool issort(vector<int> v)
{
    for(int i=0;i<v.size()-2;i++)
    {
        if(v[i]<v[i+1])
        {
            return true;
        }
        else
        {
            return false ;
            break;
        }
    }
}
tree<int>* sortedtobst(int arr[],int i,int n)
{
    if(i>n)
    {
        return NULL;
    }
    int mid=(i+n)/2;
    tree<int>* root=new tree<int>(arr[mid]);
    root->left=sortedtobst(arr,i,mid-1);
    root->right=sortedtobst(arr,mid+1,n);
    return root;
}
class pairy
{
public:
    tree<int>*head;
    tree<int>*tail;
};
class bst
{
    tree<int>* root;
    bool hasdata(tree<int> *root,int data)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->data==data)
        {
            return true;
        }
        if(root->data>data)
        {
            return hasdata(root->left,data);
        }
        if(root->data<data)
        {
            return hasdata(root->right,data);
        }
    }
    void print(tree<int>* root)
    {
        if(root==NULL)
        {
            return;
        }
        cout<<root->data<<" : ";
        if(root->left!=NULL)
        {
            cout<<"L"<<root->left->data<<" ";
        }
        if(root->right!=NULL)
        {
            cout<<"R"<<root->right->data<<" ";
        }
        cout<<endl;
        print(root->left);
        print(root->right);
    }
    tree<int>* insertdata(tree<int>* root,int data)
    {
        if(root==NULL)
        {
            tree<int>* newroot=new tree<int>(data);
            return newroot;
        }
        if(root->data>data)
        {
            root->left=insertdata(root->left,data);
        }
        if(root->data<data)
        {
            root->right=insertdata(root->right,data);
        }
        return root;
    }
    tree<int>* deletedata(tree<int>* root,int data)
    {
        if(root==NULL)
        {
            return NULL;
        }
        if(root->data>data)
        {
           root->left=deletedata(root->left,data);
        }
        else if(root->data<data)
        {
            root->right=deletedata(root->right,data);
        }
        else
        {
            if(root->right==NULL && root->left==NULL)
            {
                delete root;
                return NULL;
            }
            else if(root->right==NULL)
            {
                tree<int>*temp=root->left;
                root->left=NULL;
                delete root;
                return temp;
            }
              else if(root->left==NULL)
            {
                tree<int>*temp=root->right;
                root->right=NULL;
                delete root;
                return temp;
            }
            else
            {
                tree<int>* minnode=root->right;
                while(minnode->left!=NULL)
                {
                    minnode=minnode->left;
                }
                root->data=minnode->data;
                root->right=deletedata(root->right,minnode->data);
            }
        }
        return root;
    }
pairy sortedll(tree<int>* root)
{
    if(root==NULL)
    {
        pairy ans;
        ans.head=NULL;
        ans.tail=NULL;
        return ans;
    }
    if(root->left==NULL && root->right==NULL)
    {
        pairy p;
        p.head=root;
        p.tail=root;
        return p;
    }
    if(root->left!=NULL && root->right==NULL)
    {
        pairy lefty=sortedll(root->left);
        lefty.tail->right=root;
        pairy p;
        p.head=lefty.head;
        p.tail=root;
        return p;
    }
    else if(root->left==NULL&&root->right!=NULL)
    {
        pairy right=sortedll(root->right);
        root->right=right.head;
        pairy p;
        p.head=root;
        p.tail=right.tail;
        return p;

    }
    else
    {
        pairy lefty=sortedll(root->left);
        pairy righty=sortedll(root->right);
        pairy ans1;
        lefty.tail->right=root;
        root->right=righty.head;
        ans1.head=lefty.head;
        ans1.tail=righty.tail;
        return ans1;

    }
}
public:
    bst()
    {
        root=NULL;
    }
    ~bst()
    {
        delete root;
    }
    bool hasdata(int data)
    {
        hasdata(root,data);
    }
    void print()
    {
        print(root);
    }
    void insertdata(int data)
    {
        root=insertdata(root,data);
    }
    void deletedata(int data)
    {
        deletedata(root,data);

    }
    tree<int>* sortedll()
    {
    pairy p=sortedll(root);
    return p.head;

    }
};

// 5 3 8 1 2 7 14 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
   /* tree<int> * root=takeinput();
    print(root);
    cout<<endl<<endl;
   // int arr[]={1,2,3,4,5,6,7};
    //tree<int> * root2=sortedtobst(arr,0,6);
    //print(root2);

    /*vector<int> v;
    //cout<<isValidBST(root);
    validate2(root,v);
    if(issort(v))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    */
    bst b;
    b.insertdata(10);
    b.insertdata(20);
    b.insertdata(5);
    b.insertdata(15);
    b.print();
    tree<int>*head=b.sortedll();
    tree<int>* temp=head;
    while(temp!=NULL)
    {
         cout<<temp->data<<" ";
         temp=temp->right;
         temp->left=NULL;
    }
}
