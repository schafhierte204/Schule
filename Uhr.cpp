#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <ratio>
using namespace std;

//c++ 11 vorrausgesetzt
int main ()
{
    int stunden =0;
    int minuten =0;
    int sekunden =0;
    cout <<" Stunden : Minuten : Sekunden"<<endl;
    chrono::high_resolution_clock::time_point curTime = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> deltTime;
    do
    {
        deltTime=chrono::high_resolution_clock::now() - curTime;
        this_thread::sleep_for(chrono::milliseconds(1000)-deltTime );
        curTime = chrono::high_resolution_clock::now();
        cout<<"    ";
        if(stunden>9)
        {
            cout<<stunden;
        }
        else
        {
            cout<<" "<<stunden;
        }
        cout<<"   :    ";
        if(minuten>9)
        {
            cout<<minuten;
        }
        else
        {
            cout<<" "<<minuten;
        }
        cout<<"   :    ";
        if (sekunden>9)
        {
            cout<<sekunden;
        }
        else
        {
            cout<<" "<<sekunden;
        }
        cout<<endl;
        sekunden++;
        if(sekunden>=60)
        {
            minuten++;
            sekunden=0;
        }
        if(minuten>=60)
        {
            stunden++;
            minuten=0;
        }
        if(stunden>=24)
        {
            stunden=0;
        }
    }
    while (true);
}
