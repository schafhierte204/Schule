#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int alter;
    int rentenalter;

    cout<<"Wie Alt sind sie";
    cin>>alter;
    cout<<"Was ist ihr Renteneintrittsalter";
    cin>>rentenalter;
    if(rentenalter<63||rentenalter>67)
    {
        cout<<"das Rentenentritsalter sollte zwischen 63 und 67 Jahren sein";
    }
        else if(alter>=rentenalter)
        {
            cout<<"Herzlichen gluckwunsch sie kriegen seit "<<alter-rentenalter<<" Jahren ihre Rente";
        }
            else
            {
                cout<<" Sie haben noch "<<rentenalter-alter<<"Jahre zu Arbeiten";
            }
}
