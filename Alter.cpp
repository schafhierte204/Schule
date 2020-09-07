#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int alter;
    cout<<"Bitte Alter Eingeben :";
    cin>>alter;
    if(alter>=18)
    {
        cout<<"Sie sind Vollahrig"<<endl;
    }
    if(alter<18)
    {
        cout<<"Sie sind noch nicht Volljahrig"<<endl;
    }
}
