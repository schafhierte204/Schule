#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	double x;
    double erg;
	cout<<"Bitte Funktionswert Eingben :"<<endl;
	cin>> x;
	erg = 3*x+7;
    if ( erg <0)
    {
        cout<<"Der Wert ist negativ"<<endl;
    }
        else if ( erg == 0)
        {
            cout<<"Das ist die Nullstelle"<<endl;
        }
            else 
            {
                cout<<"Der Wert ist positiv"<<endl;
            }
    cout <<erg;
}
