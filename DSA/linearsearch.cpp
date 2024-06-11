#include<bits/stdc++.h>
using namespace std;
int ls(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;

}
int main()
{
    int arr[]={2,1,3,4,3,8,7};
    if(ls(arr,7,7)!=-1)
    {
        cout<<"presentb at "<<ls(arr,7,7)<<endl;
    }
    else
    {
        cout<<"absent"<<endl;
    }

}

