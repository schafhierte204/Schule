#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int alter;
    cout<<"Bitte Alter Eingeben :";
    cin>>alter;
    if( alter>=18 && alter<110 )
    {
        cout<<"Sie sind Vollahrig"<<endl;
    }
        else
        {
            cout<<"Sie sind noch nicht Volljahrig"<<endl;
        }
}
