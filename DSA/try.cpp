#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2)
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
               int t;
               cin>>t;
               while(t--)
               {
                   int n,m;
                   cin>>n>>m;
                   string a,b;
                   cin>>a;
                   cin>>b;
                   bool check=true;
                   for(int i=0;i<n-1;i++)
                   {
                       if(a[i]==a[i+1])
                       {
                           check=false;
                       }
                   }
                   if(check)
                   {
                       if(a==b||(a.find(b)!=std::string::npos && a[n-1]==b[m-1]))
                       {
                           cout<<"yes"<<endl;
                       }
                       else
                       {
                           cout<<"no"<<endl;
                       }
                   }
                   else
                   {
                   if(lcs(a,b)==b.size())
                   {
                        cout<<"yes"<<endl;
                   }
                   else
                   {
                        cout<<"no"<<endl;
                   }
                   }

               }
}
