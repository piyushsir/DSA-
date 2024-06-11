#include<bits/stdc++.h>
using namespace std;
int mindis(string s1,string s2,int i,int j)
{
    if(i==0)
    {
        return j;
    }
    if(j==0)
    {
        return i;
    }
    if(s1[i-1]==s2[j-1])
    {
        return mindis(s1,s2,i-1,j-1);
    }
    return 1+min(mindis(s1,s2,i,j-1),min(mindis(s1,s2,i-1,j),mindis(s1,s2,i-1,j-1)));

}
int mindis2(string s1,string s2)
{
    int m=s1.size();
    int n=s2.size();
    int arr[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 ||j==0){
            if(j==0)
            {
                arr[i][j]=i;
            }
            if(i==0)
            {
                arr[i][j]=j;
            }
            }
            else if(s1[i-1]==s2[j-1])
            {
                arr[i][j]=arr[i-1][j-1];
            }
            else
            {
                arr[i][j]=1+min(mindis(s1,s2,i,j-1),min(mindis(s1,s2,i-1,j),mindis(s1,s2,i-1,j-1)));
            }
        }
    }
    return arr[m][n];
}
int knapsack(int*weight,int*price,int n,int w)
{
    if(n==0||w==0)
    {
        return 0;
    }
    if(weight[n-1]>w)
    {
        return knapsack(weight,price,n-1,w);
    }
    else
    {
        return max(price[n-1]+knapsack(weight,price,n-1,w-weight[n-1]),knapsack(weight,price,n-1,w));
    }
}
int knapsack2(int*weight,int*price,int w,int n)
{
    int arr[n+1][w+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0||j==0)
            {
                arr[i][j]=0;
            }
            else if(weight[i-1]>j)
            {
                arr[i][j]=arr[i-1][j];
            }
            else
            {
                int a=price[i-1]+arr[i-1][j-weight[i-1]];
                int b=arr[i-1][j];
                arr[i][j]=max(a,b);
            }
        }
    }
    return arr[n][w];
}
int main()
{
 cout<<mindis2("intention","execution")<<endl;
 int arr1[]={4,3,5,6};
 int arr2[]={25,50,20,60};
 cout<<knapsack(arr1,arr2,4,10)<<endl;
 cout<<knapsack2(arr1,arr2,10,4);
}
