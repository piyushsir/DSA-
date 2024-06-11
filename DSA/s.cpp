#include <bits/stdc++.h>
using namespace std;
int comp(int a,int b)
{
    return a*b;
}
int main()
{
   /* vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    vector<vector<int>> ans;
    do{
        ans.push_back(a);
    }
    while(next_permutation(a.begin(),a.end()));
        for(auto it:ans){
        for(auto ite:it)
            cout<<ite<<" ";
            cout<<endl;
        }

        int arr[]={2,3,4,5,6};
        cout<<accumulate(arr,arr+5,1,comp);
        */
           int arr[]={2,3,4,5,6};
           int arr2[5];
           partial_sum(arr,arr+5,arr2,comp);
           for(int i=0;i<5;i++)
            cout<<arr2[i]<<" ";
}
