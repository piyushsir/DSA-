#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> graph(4,vector<int>(4,0));
    graph[0][1]=1;
    graph[1][0]=1;
    graph[1][2]=1;
    graph[2][1]=1;
    graph[2][3]=1;
    graph[3][2]=1;
    graph[3][1]=1;
    graph[1][3]=1;
   /* for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int res[4];
    bool av[4]={0};
    for(int i=1;i<4;i++)
    {
        res[i]=-1;
    }
    res[0]=0;
    int cn=0;
    for(int i=1;i<4;i++)
    {
        for(int f=0;f<4;f++)
        {
            if(res[f]!=-1 && graph[i][f]==1)
            {
                av[res[f]]=1;
            }

        }
        int cr;
        for(cr=0;cr<4;cr++)
        {
            if(av[cr]==0)
            {
                break;
            }
        }
        res[i]=cr;
        cn=max(cn,cr+1);
        /*for(int k=0;k<4;k++)
        {
            cout<<av[k]<<" ";
        }
        cout<<endl;*/
        for(auto it:graph[i])
        {
            if(res[it]!=-1)
            {
                av[res[it]]=0;
            }
        }

    }
cout<<endl;
    cout<<cn<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<res[i]<<" ";
    }

}














































































































































































































































































































































