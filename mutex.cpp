#include<bits/stdc++.h>
#include<chrono>
using namespace std;
//using namespace std::chrono;
typedef long long ll;
ll res1 = 0;
std::mutex m;
void findeven()
{
    m.lock();
    res1++;
    m.unlock();
}
void findeven2()
{
    for(int i=0;i<1000000;i++){
    if(m.try_lock())
    res1++;
    m.unlock();
    }
}
std::mutex m1,m2;

int main()
{

    std::thread th1(findeven2);
    std::thread th2(findeven2);
    if(th1.joinable())
        th1.join();
        cout<<res1<<endl;
     if(th2.joinable())
        th2.join();

    cout<<res1<<endl;
    cout<<try_lock(m1,m2)<<endl;
    m1.unlock();
    m2.unlock();
}

