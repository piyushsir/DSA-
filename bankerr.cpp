#include<bits/stdc++.h>
using namespace std;
int r=5;
int c=3;
bool isSafe(int process[5],int avil[3],int maxm[5][3],int allot[5][3])
{
    int need[5][3];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            need[i][j] = maxm[i][j] - allot[i][j];
        }
    }

    int safestate[5];
    int visited[5]={0};
    int work[3];
    for(int l=0;l<3;l++)
    {
        work[l]=avil[l];
    }
    int count=0;
    while(count<5)
    {
        bool found=false;

        for(int i=0;i<5;i++)
        {
            if(visited[i]==0)
            {
                int k;
                for(k=0;k<3;k++)
                {
                    if(need[i][k]<=work[k])
                    {

                    }
                    else{
                        break;
                    }
                }

                if(k==3)
                {
                    for(int f=0;f<3;f++)
                    {
                      work[f]+=allot[i][f];
                    }
                    visited[i]=1;

                    safestate[count]=i;
                    count++;
                    found=true;
                }
            }
        }

        if(found==false)
        {
            cout<<"no safe state"<<endl;
            return false;
        }
    }

    cout<<"safe state"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<safestate[i]<<" ";
    }
    return 1;
}
int main()
{
    int processes[] = {0, 1, 2, 3, 4};


    int avail[] = {3, 3, 2};


    int maxm[][3] = {{7, 5, 3},
                     {3, 2, 2},
                     {9, 0, 2},
                     {2, 2, 2},
                     {4, 3, 3}};


    int allot[][3] = {{0, 1, 0},
                      {2, 0, 0},
                      {3, 0, 2},
                      {2, 1, 1},
                      {0, 0, 2}};


    cout<<isSafe(processes, avail, maxm, allot)<<endl;

    return 0;
}
