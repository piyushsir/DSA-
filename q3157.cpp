#include<bits/stdc++.h>
using namespace std;
int digsum(string n,int st,int en)
{
    int sum=0;
   for(int i=st;i<en;i++)
   {
       int tmp = n[i]-'0';
       sum+=tmp;
   }

   return sum;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<string,int>> odd;
    vector<pair<string,int>> even;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        pair<string,int> p;
        if(s.size()%2==0)
        {
            p.first =s;
            p.second=s.size();
            even.push_back(p);
        }
        else
        {
            p.first =s;
            p.second=s.size();
            odd.push_back(p);
        }
    }
        //cout<<digsum(vec[i]);
        int count=0;
        for(int i=0;i<odd.size();i++)
        {
            for(int j=0;j<odd.size();j++)
            {
                string tmp = odd[i].first+odd[j].first;
                //string tmp2 = odd[j].first + odd[i].first;
                int tmpn = tmp.size()/2;
                if((digsum(tmp,0,tmpn) == digsum(tmp,tmpn,tmp.size())))
                {
                    count++;
                }

            }
        }
        for(int i=0;i<even.size();i++)
        {
            for(int j=0;j<even.size();j++)
            {
                string tmp = even[i].first+even[j].first;
                //string tmp2 = even[j].first + even[i].first;
                int tmpn = tmp.size()/2;
                if((digsum(tmp,0,tmpn) == digsum(tmp,tmpn,tmp.size())))
                {
                    count++;
                }

            }
        }




    cout<<count<<endl;


}
