#include<bits/stdc++.h>
using namespace std;
void heapsort(vector<int> &v)
{
   for(int i=1;i<v.size();i++)
   {
       int ci=i;
       while(ci>0)
       {
           int pi=(ci-1)/2;
           if(v[pi]>v[ci])
           {
               swap(v[pi],v[ci]);
               ci=pi;
           }
           else
           {
               break;
           }
       }
   }
   int sizee=v.size();
   while(sizee>=1)
   {
       swap(v[0],v[sizee-1]);
       sizee--;
       int pi=0;
        int obj=0;
       while(true)
       {
         int lci=(2*pi)+1;
         int rci=(2 *pi)+2;
         obj=pi;
         if(lci<sizee && v[lci]<v[obj])
         {
             obj=lci;
         }
          if(rci<sizee && v[rci]<v[obj])
         {
             obj=rci;
         }
         if(obj==pi)
         {
             break;
         }
         swap(v[pi],v[obj]);
         pi=obj;

       }
   }
}

int main()
{
    vector<int> vec;

    vec.push_back(100);
    vec.push_back(45);
vec.push_back(333);
vec.push_back(88);
vec.push_back(1000);

    heapsort(vec);
    for(auto it:vec)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
