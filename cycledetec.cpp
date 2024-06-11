#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &parent,int i)
{
    while(parent[i]!=i)
    {
        i=parent[i];
    }
    return i;
}

void uni(vector<int> &parent,int a,int b)
{
    int x = find(parent,a);
    int y = find(parent,b);
    parent[b]=a;
}

int main()
{
    vector<vector<int>> v = {{0,2},{2,1},{1,4},{4,3};
    vector<int> parent(5);
    bool res =false;
    for(int i=0;i<5;i++)
    {
        parent[i] = i;
    }
    for(int j=0;j<v.size();j++)
    {
        int x = v[j][0];
        int  y =v[j][1];

        int a = find(parent,x);
        int b = find(parent,y);
        if(a!=b)
        {
            uni(parent,x,y);
        }
        else
        {
            res =true;
            break;
        }
    }

    if(res)
    {
        cout<<"cycle"<<endl;
    }
    else
    {
        cout<<"no cycle"<<endl;
    }

}
