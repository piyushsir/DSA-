#include<bits/stdc++.h>
using namespace std;
bool valid(string arr)
{
      stack<char> st;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=='('||arr[i]=='['||arr[i]=='{')
            {
                    st.push(arr[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else if((st.top()=='('&&arr[i]==')')||(st.top()=='{'&&arr[i]=='}')||(st.top()=='['&&arr[i]==']'))
                {
                    st.pop();
                }
                else
                {

                    return false;
                }

            }

        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }

}
int main()
{

     string arr;
        cin>>arr;
        cout<<valid(arr);


}

