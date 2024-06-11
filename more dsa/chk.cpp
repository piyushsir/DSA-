#include<bits/stdc++.h>
using namespace std;
/*int PalinArray(int arr[], int n)
    {
    	// code here

         for(int i=0;i<n;i++)
         {
             int chk=0;
             int tmp=arr[i];
             while(arr[i])
             {
                 chk=chk*10;
                 chk+=arr[i]%10;
                 arr[i]=arr[i]/10;

             }
             if(tmp!=chk)
             {
                 return 0;
             }
         }
         return 1;
    }
int main()
{
    int a=111;
    int chk=0;
     while(a)
    {
         chk=chk*10;
                 chk+=a%10;
                 a=a/10;

    }
    int arr[]={111,222,333,444,555};
    cout<<PalinArray(arr,5);
    //cout<<chk;
}
*/
int first(int arr[],int n,int x)
{
    int ans=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==x)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>x)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
int last(int arr[],int n,int x)
{
    int ans=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==x)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>x)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    ans.push_back(first(arr,n,x));
    ans.push_back(last(arr,n,x));
    return ans;
}
int main()
{

    int arr[]={1,2,3,3,4,5};
    cout<<last(arr,6,3);
    cout<<first(arr,6,3);
    //5
//1 2 1 3 2 1 4 2
}
