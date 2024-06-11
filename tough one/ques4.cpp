#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void algo1(int *arr, int a, int b)
{
    int n = b - a + 1;
    if (n == 2 && arr[a] > arr[a + 1])
    {
        int temp = arr[a];
        arr[a] = arr[a + 1];
        arr[a + 1] = temp;
    }
    if (n > 2)
    {
        int m = ceil((2 * n) / 3.0);
        algo1(arr, a, a + m - 1);
        algo1(arr, a + n - m, b);
        algo1(arr, a, a + m - 1);
    }
}
void algo2(int *arr, int a, int b)
{
    int n = b - a + 1;
    if (n == 2 && arr[a] > arr[a + 1])
    {
        int temp = arr[a];
        arr[a] = arr[a + 1];
        arr[a + 1] = temp;
    }
    if (n > 2)
    {
        int m = floor((2 * n) / 3.0);
        algo2(arr, a, a + m - 1);
        algo2(arr, a + n - m, b);
        algo2(arr, a, a + m - 1);
    }
}
int main()
{
    int arr1[]= {5,4,1,0,2,7,3};
    int arr2[]= {5,4,1,0,2,7,3};
    int n= 7;

    algo1(arr1, 0, n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++)
    {
        cout<< arr1[i]<<" ";
    }
    cout<<endl;

    algo2(arr2, 0, n-1);
    cout<<"Array with adjacent pairs sorted: ";
    for(int i=0; i<n; i++)
    {
        cout<< arr2[i]<<" ";
    }
    cout<<endl;
}

