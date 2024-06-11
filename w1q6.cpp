#include<bits/stdc++.h>
using namespace std;

class gnode
{
  public:
    int data;
    vector<gnode*> neighbours;
}

gnode * bfs(gnode* src)
{
    unordered_map<gnode*,gnode*> mp;
    gnode* node = new gnode();
    node->data = src->data;
    queue<gnode*> q;
    q.push(src);

    while(!q.empty())
    {
        gnode* tmp =q.front();
        q.pop();

        vector<gnode*> v = tmp->neighbours;

        for(int i=0;i<v.size();i++)
        {
            if(mp[v[i]]==NULL)
            {
                q.push(v[i]);
                gnode* tmp2  =  new gnode();
                tmp2->data = tmp->data;
                mp[v[i]]=tmp2;
            }

            mp[tmp].push_back(v[i]);
        }
    }


    return mp[src];

}
int main()
{

}
