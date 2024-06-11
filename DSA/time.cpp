chanDra@2002
#include<bits/stdc++.h>
using namespace std;
class time1
{
    int hours;
    int minutes;
    int sec;
public:
    time1()
    {

    }
    time1(int h,int m,int s)
    {
        try
        {
            if(h>23 || m>60 || s>60)
            {
                throw 2;
            }
            hours=h;
            minutes=m;
            sec=s;
        }
        catch(int a)
        {
            cout<<"input is wrong"<<endl;

        }
        cout<<hours<<" : "<<minutes<<" : "<<sec<<endl;
    }
    void display()
    {
        cout<<hours<<" : "<<minutes<<" : "<<sec<<endl;
    }
    time1 operator-(time1 &t)
    {
        try
        {
            if(hours<t.hours ||minutes<t.minutes || sec<t.sec)
            {
                throw 2;
            }
            time1 nt;
         nt.hours=hours-t.hours;
         nt.sec=sec-t.sec;
         nt.minutes=minutes-t.minutes;
         return nt;
        }
        catch(int a)
        {
            cout<<"first time is smaller"<<endl;
        }



    }
};
int main()
{
    time1 a(5,2,3);
    time1 b(2,1,1);
    time1 c=b-a;
    c.display();
}
