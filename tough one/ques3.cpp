#include<bits/stdc++.h>
using namespace std;
int distance(int x,int y)
{
    int a=x*x;
    int b=y*y;
    return sqrt(a+b);
}
int main()
{
    int k=2;
    vector<vector<int>> v={{1,2},{3,4},{-1,-1}};
    multimap<int,pair<int,int>> mp;
    for(int i=0;i<v.size();i++)
    {
        int f=distance(v[i][0],v[i][1]);
        pair<int,int> lol;
        lol.first=v[i][0];
        lol.second=v[i][1];
        mp.insert({f,lol});
    }
    int n=0;
    for(auto it:mp)
    {
        if(n!=k)
        {
            pair<int,int> p=it.second;
            cout<<p.first<<" "<<p.second<<endl;
        }
        n++;

    }

}
