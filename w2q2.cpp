#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int mx=-99;
    int curmx=0;
    stack<int> st;
    st.push(-1);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            st.push(i);
        }
        else
        {
            st.pop();

            if(st.empty())
            {
                st.push(i);
            }
            else
            {
                curmx = i-st.top();
                mx=max(mx,curmx);

            }

        }


    }

    if(mx==-99)
    {
        return 0;
    }
    else
    {
        return mx;
    }

}
