#include<bits/stdc++.h>
using namespace std;
/*void merge1(int *arr,int l,int h,int mid)
{
    int b[h];
    int i=l;
    int j=mid+1;
    int k=l;
    while(i<mid && j<h)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
        }
        else
        {
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=h)
        {
            b[k]=arr[j];
            j++;
            k++;
        }

    }
    else if(j>mid)
    {
        while(i<=mid)
        {
            b[k]=arr[i];
            i++;
            k++;
        }

    }
    for(int f=l;f<h;f++)
    {
        arr[f]=b[f];
    }


}*/
void merge1(int *arr,int l,int h,int mid)
{
    int n1=mid-l+1;
    int n2=h-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[i+l];
    }
     for(int j=0;j<n2;j++)
    {
        b[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<a[j])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = a[i];
        i++;
        k++;
    }
    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = b[j];
        j++;
        k++;
    }


}
void mergesort(int *arr,int l,int h)
{
    if(l>=h)
    {
        return;
    }

        int mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge1(arr,l,h,mid);

}
int main()
{
    cout<<"run"<<endl;
    int arr[]={8,7,5,4,1};
     mergesort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}

