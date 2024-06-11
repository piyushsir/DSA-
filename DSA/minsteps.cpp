#include<bits/stdc++.h>
using namespace std;
int chair(int n,int *arr)
{
    if(n==0||n==1)
        return 1;
    if(arr[n]!=-1)
    {
        return arr[n];
    }
    int out=chair(n-1,arr)+chair(n-2,arr);
    arr[n]=out;
    return out;
}
int minstep3(int n)
{
    int *arr=new int[n+1];

    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=n;i++)
    {
         int a=INT_MAX;
    int b=INT_MAX;

        int c=arr[i-1];
        if(i%2==0)
        {
            a=arr[i/2];
        }
        if(i%3==0)
        {
            b=arr[i/3];
        }


        arr[i]=min(a,min(b,c))+1;
    }
    int ans=arr[n];
    return ans;
}
/*int minstep2(int n,int* arr)
{
    int a=INT_MAX;
    int b=INT_MAX;
    if(n==1)
    {
        return 0;
    }
    if(arr[n]!=-1)
    {
        return arr[n];
    }
    int c=minstep2(n-1,arr);
    if(n%2==0)
    {
        a=minstep2(n/2,arr);
    }
    if(n%3==0)
    {
        b=minstep2(n/3,arr);
    }
    int output=min(a,min(b,c))+1;
    arr[n]=output;
    return output;

}
/*
int minstep(int n)
{
    int a=INT_MAX;
    int b=INT_MAX;

    if(n==1)
    {
        return 0;
    }
    int c=minstep(n-1);
    if(n%3==0)
    {
       b= minstep(n/3);
    }
    if(n%2==0)
    {
        a=minstep(n/2);
    }


    return min(a,min(b,c))+1;

}*/
int chair2(int n)
{
    int *arr=new int[n+1];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    int ans=arr[n];
    return ans;
}
int lcs(string s1,string s2,int i,int j)
{
    if(i==s1.size()||j==s2.size())
    {
        return 0;
    }
    if(s1[i]==s2[j])
    {
        return 1+lcs(s1,s2,i+1,j+1);
    }
    return max(lcs(s1,s2,i+1,j),lcs(s1,s2,i,j+1));
}
int lcs2(string s1,string s2)
{
    int m=s1.size();
    int n=s2.size();
   int arr1[m+1][n+1];
   for(int i=0;i<=m;i++)
   {
       for(int j=0;j<=n;j++)
       {
           if(i==0||j==0)
           {
               arr1[i][j]=0;
           }
           else if(s1[i-1]==s2[j-1])
           {
               arr1[i][j]=1+arr1[i-1][j-1];
           }
           else
           {
               arr1[i][j]=max(arr1[i-1][j],arr1[i][j-1]);
           }
       }

   }
   return arr1[m][n];
}

int main()
{

  /*int *arr=new int[8];
  for(int i=0;i<=8;i++)
  {
      arr[i]=-1;
  }/*
  cout<<chair(15,arr)<<endl;
  cout<<chair2(15);*/

  cout<<lcs2("apple","acpbple")<<endl;
}
