#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v(4,vector<int>(4,0));
    v[1][2]=1;
    v[2][1]=1;
    v[2][3]=1;
    v[3][2]=1;
    v[0][1]=1;
    v[1][0]=1;
    v[0][2]=1;
    v[2][0]=1;
    /*for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int av[4]={0};
    int res[4]={-1,-1,-1,-1};
    res[0]=0;
    int cn=0;
    for(int i=1;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(v[i][j]==1 && res[j]!=-1)
            {
                av[res[j]]=1;
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
        cn=max(cr+1,cn);
        for(int k=0;k<4;k++)
        {
            if(v[i][k]==1 && res[k]!=-1)
            {
                av[res[k]]=0;
            }
        }
    }
    cout<<cn<<endl;
for(int i=0;i<4;i++)
{
    cout<<res[i]<<" ";
}


}
