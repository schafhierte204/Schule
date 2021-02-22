#include <iostream>
using namespace std;

int main()
{
    int reihen;
    int sterne;
    cout<<"Wie viele reihen sollen ausgegeben werden"<<endl;
    cin>>reihen;
    cout<<"Wie viele sterne sollen pro reihe augegeben wergen"<<endl;
    cin>>sterne;
    int i=0;
    int j=0;
    do
    {
        i++;
        cout<<i<<". Reihe, ";
        j=0;
        do
        {
            cout<<"*";
            j++;
        }
        while (j<sterne);
        cout<<endl;
    }
    while (i<reihen);
}
