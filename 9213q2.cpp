#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       /*stack<char> st;
       for(int i=0;i<s.size();i++)
       {

           if(s[i]=='b' || s[i]=='B')
           {
               if(st.size()==0)
               {
                    continue;
               }
               else
               {
                   if(s[i]=='b')
                   {
                       stack<char> tmp;
                       while(!st.empty())
                       {
                           if(st.top()>=97)
                           {
                               st.pop();
                               break;
                           }
                           else
                           {
                               tmp.push(st.top());
                               st.pop();
                           }
                       }
                       while(!tmp.empty())
                       {
                           st.push(tmp.top());
                           tmp.pop();
                       }
                   }
                   else
                   {
                       stack<char> tmp;
                       while(!st.empty())
                       {
                           if(st.top()<97)
                           {
                               st.pop();
                               break;
                           }
                           else
                           {
                               tmp.push(st.top());
                               st.pop();
                           }
                       }
                       while(!tmp.empty())
                       {
                           st.push(tmp.top());
                           tmp.pop();
                       }
                   }
               }

           }
           else
           {
               st.push(s[i]);

           }
       }
       string ans="";
       while(!st.empty())
       {
           ans+=st.top();
           st.pop();
       }
         reverse(ans.begin(), ans.end());

       cout<<ans<<endl;*/

       vector<int> small;
       vector<int> cap;
       string ans="";
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='b' || s[i]=='B')
           {
               if(s[i]=='b')
               {
                   if(small.size()!=0){
                   ans[small.back()]='9';
                   small.pop_back();
                   }

               }
               else
               {

                   if(cap.size()!=0){
                   ans[cap.back()]='9';
                   cap.pop_back();
                   }
               }
               ans+='9';
           }
          else
          {
            ans+=s[i];
            if(s[i]>=97)
            {
                   small.push_back(i);
            }
            else
            {
                   cap.push_back(i);
            }
          }
       }
       //cout<<ans<<endl;

       for(int i=0;i<ans.size();i++)
       {
           if(ans[i]!='9')
           {
               cout<<ans[i];
           }
       }
       cout<<endl;


   }
}
