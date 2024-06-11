#include<bits/stdc++.h>
using namespace std;
vector<int> lefty;
vector<int> righty;
void lnse(vector<int> arr)
{
    stack<int> st;

    for(int i=0;i<arr.size();i++)
    {
        while(!st.empty() && arr[st.top()]>=arr[i])
        {
            st.pop();
        }

            if(st.empty())
            {
                lefty.push_back(-1);
            }
            else
            {
                lefty.push_back(st.top());
            }

        st.push(i);
    }
}

void rnse(vector<int> arr)
{
    stack<int> st;

    for(int i=arr.size()-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]>=arr[i])
        {
            st.pop();
        }

            if(st.empty())
            {
                righty.push_back(arr.size());
            }
            else
            {
                righty.push_back(st.top());
            }

        st.push(i);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    lnse(arr);

    rnse(arr);

    int ans=0;
    reverse(righty.begin(),righty.end());
    for(int i=0;i<n;i++)
    {
        ans=max(ans,(((righty[i]-lefty[i])-1)*arr[i]));
    }


    cout<<ans<<endl;


}
