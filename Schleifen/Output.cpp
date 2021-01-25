#include <iostream>
using namespace std;

int main()
{
    int reien;
    cout<<"Wiefiele Sternchen reien mochten sie haben"<<endl;
    cin>> reien;
    if (reien<0)
    {
        cout<<"Bitte Geben sie eine Positive Zahl ein"<<endl;
    }
    else
    {
        for (int i=0;i<reien;i++)
        {
            cout<<"Reihe "<<i+1<<" *****"<<endl;
        }
    }
}
