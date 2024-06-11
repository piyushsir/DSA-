#include<bits/stdc++.h>
using namespace std;
void bs(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int flag=0;
      for(int j=0;j<n-1;j++)
      {
          if(arr[j]>arr[j+1])
          {
              swap(arr[j],arr[j+1]);
              flag=1;
          }
      }
      if(flag==0)
        break;
    }
}
int main()
{
    int arr[]={2,1,3,4,3,8,7};
    bs(arr,7);
    for(int i=0;i<7;i++)
        cout<<arr[i]<<endl;

}
