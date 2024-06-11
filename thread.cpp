#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;
typedef long long ll;
ll res1 = 0;
ll res2 = 0;
void findeven(ll st,ll en)
{
    for(int i=st;i<en;i++)
    {
        if(!(i&1))
        {
            res1+=i;
        }
    }
    std::this_thread::sleep_for(chrono::seconds(5));

}

void findodd(ll st,ll en)
{
    for(int i=st;i<en;i++)
    {
        if(i&1)
        {
            res2+=i;
        }
    }

}
int main()
{
    ll st=0;
    ll en = 9999999;
    auto t1 = high_resolution_clock::now();
    std::thread th1(findeven,st,en);
    std::thread th2(findodd,st,en);
    if(th1.joinable())
        th1.join();
    if(th2.joinable())
        th2.join();
    //findeven(st,en);
    //findodd(st,en);

    auto t2 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(t2-t1);

    cout<<res1<<endl;
    cout<<res2<<endl;
    cout<<(duration.count())<<endl;
}
