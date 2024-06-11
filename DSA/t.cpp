#include<bits/stdc++.h>

using namespace std;

vector<bool> is_visited;
vector<int>  customer_applied;
string user_id;



class Node{
    public:
    bool isTerminal;
    Node* child[26];

    Node(){
        isTerminal = false;
        for(int i=0;i<26;i++){
            child[i] = NULL;
        }
    }
};




void add(string word, Node* trie)
{

    int n = word.size();
    for(int i=0;i<n;i++){
        if(trie->child[word[i] - 'A'] == NULL){
            trie->child[word[i] - 'A'] = new Node();
        }
        trie = trie->child[word[i] - 'A'];
    }
    trie->isTerminal = true;
}


map<string ,int> sellers{
    {"NEW DELHI",0},
    {"PREET VIHAR",1},
    {"DARYAGANJ",2},
    {"DEFENCE COLONY",3},
    {"SAKET",4},
    {"DWARKA",5},
    {"RAJOURI GARDEN",6},
    {"KANJHAWALA",7},
    {"NERALA",8},
    {"SEELAMPUR",9},
    {"SHADRA",10}
};

bool search(string word, Node* trie)
{

    int n = word.size();
    for(int i=0;i<n;i++){

        if(trie->child[word[i] - 'A'] == NULL) return false;
        trie = trie->child[word[i] - 'A'];
    }
    return trie->isTerminal;
}


bool is_available(int u , vector<vector<int>> &g)
{
    int m = g.size();
    int n = g[0].size();

    for(int i=0;i<n;i++)
    {
        if((g[u][i])&& (!is_visited[i]))
        {
            is_visited[i] = 1;

            if(customer_applied[i] == -1 || is_available(customer_applied[i],g))
            {
                customer_applied[i] = u;
                return true;
            }
        }
    }
    return false;
}



void product_remaining(vector<vector<int>> &g)
{
    int m = g.size();
    int n = g[0].size();


    customer_applied.assign(sellers.size(),-1);

    for(int i=0;i<m;i++)
    {
        is_visited.assign(sellers.size(),0);
        is_available(i,g);

    }
}
void shortest_dis(vector<vector<int>> &v)
{
    for(int k=0;k<sellers.size();k++)
    {
        for(int i=0;i<sellers.size();i++)
        {
            for(int j=0;j<sellers.size();j++)
            {
                if((v[i][j] > v[i][k]+v[k][j]) && (v[i][k]!=1000) && (v[k][j]!=1000) &&(v[i][j]!=1000))
                {
                    v[i][j] = v[i][k]  + v[k][j];
                }
            }
        }
    }
}
class user
{
public:
    string name;
    int no_choices;
    string choice;
    string home;

};

class seller
{
public:
    string name;
    string productName;
    string location;
};



map<string,int> added_products{
{"MARTIN",0},
  {"TAYLOR" ,1},
  {"SEAGULL" ,2},
  {"FENDER" ,3},
  {"GUILD" ,4},
  {"YAMAHA" ,5},
  {"GRETSCH" ,6},
  {"TAKAMINE" ,7},
  {"LBANEZ" ,8},
  {"GIBSON" ,9},
  {"EPIPHONE",10}
};

map<string,int> seller_name{

  {"SHANTANU KANDWAL",0},
  {"ABHAY SINGH",1},
  {"RAHUL ANAND",2},
  {"PIYUSH GUPTA",3},
  {"TUSHAR SHARMA",4},
  {"JATIN GUPTA",5},
  {"ADITYA SINGHAL",6},
  {"ARPAN SINGH",7},
  {"SPARSH KUMAR",8},
  {"RAHUL KALRA",9},
  {"NIKHIL GUPTA",10}
};
vector<vector<int>> dis
{
  {1000,12,15,20,35,40,35,60,70,50,40},

  {12,1000,10,20,32,55,45,60,75,20,15},

  {15,12,1000,22,30,50,42,65,70,10,18},

  {20,20,22,1000,25,40,35,80,100,35,40},

  {35,50,35,25,1000,42,55,65,110,52,56},

  {40,80,60,58,40,1000,22,42,70,70,80},

  {35,50,40,42,35,15,1000,28,55,60,68},

  {60,100,80,85,90,50,40,1000,45,65,75},

  {71,75,65,80,110,80,70,50,1000,50,60},

  {50,18,10,40,60,75,65,80,75,1000,8},

  {40,15,15,30,45,75,60,80,78,8,1000}

};


vector<vector<int>> choices_made
{
  {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},

  {1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},

  {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},

  {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},

  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},

  {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},

};


int start()
{
    cout<<"\t\t\t--------------------------------WELCOME TO THE WORLD OF MUSIC-----------------------------------"<<endl;
    cout<<endl<<endl<<endl;


    cout<<"\t\t\t HOW DO YOU WANT TO ENTER"<<endl;
    cout<<"\t\t\t 1. SELLER "<<endl;
    cout<<"\t\t\t 2. BUYER "<<endl;

    cout<<"\t\t\t ENTER CHOICE "<<endl;

    int n;
    cin>>n;

    return n;

}
int use=11;

bool login()
{
    cout<<"\t\t\t-------------------------------PLEASE FILL THE FOLLOWING DETAILS--------------------------------"<<endl<<endl;;
    cout<<"\t\t 1. ENTER YOUR USER ID "<<endl;

    cin>>user_id;
    cout<<"\t\t 2. ENTER PASSWORD "<<endl;
    string password;
    cin>>password;

    if(user_id == "piyush123" && password == "12345678")
    {


            return 1;
    }
    else{

            return 0;
    }

}
int use2=11;
int main()
{
    Node * root = new Node();
   for(auto it:sellers)
   {
       add(it.first,root);
   }
    label1:
    label2:
    label3:
    int n;
    n = start();
    bool log =0;

    if(n==1 || n==2)
    {
        system("cls");
        log = login();
        if(log)
        {
           cout<<"\t\t\t YOU HAVE LOGGED IN SUCCESFULL "<<endl;
        }
        else
        {

             cout<<"\t\t\t INCORRECT PASSWORD "<<endl;
             int k ;

             cout<<"\t\t\t PRESS 1 TO TRY AGAIN  "<<endl;

             cout<<"\t\t\t PRESS 2 TO EXIT "<<endl;

             cin>>k;
             if(k==1)
             {
                goto label1;

             }
             else
             {
                 return 0;
             }
        }


    }
    else
    {
         cout<<"\t\t\t INCORRECT CHOICE "<<endl;
         goto label3;
    }

    if(n==1)
    {
        seller s1;
        cout<<"\t\t\t ENTER NAME OF YOUR FRANCHISE WHICH YOU WANT TO SELL"<<endl;
        cin>>s1.productName;
        cout<<"\t\t\t ENTER YOUR FRANCHISE LOCATION "<<endl;
        cin>>s1.location;
        string t1 = "";
        string t2 = "";
        string t3="";

        for(int i=0;i<s1.productName.size();i++)
       {
          t1 +=toupper(s1.productName[i]);
       }
       s1.productName = t1;

        for(int i=0;i<s1.location.size();i++)
       {
          t2 +=toupper(s1.location[i]);
       }
       s1.location = t2;

       for(int i=0;i<user_id.size();i++)
       {
          t3 +=toupper(user_id[i]);
       }
       user_id = t3;
       int o=0;
       for(auto it:added_products)
       {
           if(it.first==s1.productName)
           {
               o=1;
               break;
           }
       }
       int o2=0;
       for(auto it:sellers)
       {
           if(it.first==s1.location)
           {
               o2=1;
               break;
           }
       }

       if(!o2)
       {
           sellers[s1.location] = use;
           use++;
       }
       if(!o)
       {
           added_products[s1.productName]=use2;
       }


        if(!search(s1.productName,root))
            add(s1.productName,root);



      cout<<"---------------------------------------------------------------------------------"<<endl;
      cout<<"\t\tADDED YOUR DETAILS PLEASE VERIFY"<<endl;
      cout<<"\t\tNAME : "<<user_id<<endl;
      cout<<"\t\tFRANCHISE : "<<s1.productName<<endl;
      cout<<"\t\tLOCATION : "<<s1.location<<endl;
      cout<<"---------------------------------------------------------------------------------"<<endl;

      goto label2;

    }
    else
    {

         vector<int> v(sellers.size(),0);
         vector<int> v2;
         shortest_dis(dis);
         user u1;
         int home_id;

        cout<<"\t\tENTER NO. OF CHOICES OF FRANCHISE YOU WANT TO BUY "<<endl;
        cin>>u1.no_choices;
          for(int i=0;i<u1.no_choices;i++)
          {
               cout<<"\t\tENTER THE FRANCHISE YOU WANT TO BUY "<<endl;
               cin>>u1.choice;
               if(!search(u1.choice,root))
               {
                   cout<<"\t\tSORRY ! THIS IS NOT AVAILABLE"<<endl;
               }
               else
               {
                   int b = added_products[u1.choice];

                   v[b]=1;
                    v2.push_back(b);


               }


          }


          choices_made.push_back(v);
          product_remaining(choices_made);
          cout<<"\t\tENTER YOUR HOME "<<endl;
          cin>>u1.home;

          home_id = sellers[u1.home];

           for(int i=0;i<v2.size();i++)
           {
               if(customer_applied[v2[i]]!=-1)
               {
                   if( dis[v2[i]][home_id]==1000)
                   {
                       cout<<"present in your area"<<endl;
                   }
                   else{
                   cout<<"distance : "<< dis[v2[i]][home_id]<<endl;
                   //cout<<"seller name : "<<seller_name[v2[i]]<<endl;
                   }
               }
               else
               {
                   cout<<"this is taken by someone else"<<v2[i]<<home_id<<endl;

                   for(int i=0;i<sellers.size();i++)
                   {
                       cout<<customer_applied[i]<<" ";

                   }
               }

           }




    }






   /*product_remaining(choices_made);

     for(int i=0;i<6;i++)
    {
        if(customer_applied[i]!=-1)
        {
            cout<<added_products[customer_applied[i]]<<" "<<sellers[customer_applied[i]]<<endl;
        }
    }
    cout<<endl;


  /* for(int i=0;i<11;i++)
   {
       cout<<sellers[i]<<endl;
   }*/

   /*for(int i=0;i<11;i++)
   {
       for(int j=0;j<11;j++)
       {
           cout<<dis[i][j]<<" ";
       }
       cout<<endl;

   }


   cout<<endl;
   cout<<endl;
   for(int i=0;i<11;i++)
   {
       for(int j=0;j<11;j++)
       {
           cout<<dis[i][j]<<" ";
       }
       cout<<endl;

   }
   user a;
   a.name = "rahul";
   a.choice = "3 year older bitch";
   a.home = "NERALA";

   seller b;
   b.name = "piyush";
   b.productName = "3 year older bitch";
   b.location = "NEW DELHI";
   int tmp = 0;
   int tmp2 =0;
   for(int i=0;i<11;i++)
   {
       if(sellers[i]==a.home)
       {
           tmp =  i;
       }

       if(sellers[i] == b.location)
       {
           tmp2 = i;
       }
   }

   cout<<tmp<<" "<<tmp2<<endl;
   cout<<dis[tmp][tmp2]<<endl;
*/



}

