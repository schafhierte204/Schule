#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b;
    char wahl;
    bool fehler=false;
    cout<<"Wollen sie die Wurtzel einer Zahl(w) oder den exponenten zweier zahlen berechnen(e)?"<<endl;
    cin>>wahl;
    switch (wahl)
    {
        case 'w' :
        case 'W':
            cout<<"Bitte Geben sie die Zahl ein."<<endl;
            do
            {
                fehler=false;
                if( cin>>a){}
                else
                {
                    cin.clear();
                    cin.ignore();
                    fehler=true;
                    cout<<"Bitte geben sie eine Zahle ein."<<endl;//wird bei laeneren zeichenketten oefter angezeigt
                }
                if(a<0)
                {
                    cout<<"Bitte geben sie eine positive Zahl ein."<<endl;
                    fehler=true;
                }

            }
            while(fehler);
            cout<<"Die Wurtzel von "<<a<<" ist "<<sqrt(a)<<endl;
            break;
        case 'e' :
        case 'E' :
            cout<<"Bitte geben sie die Basis ein."<<endl;
            while(!(cin>>a))
            {
                cin.clear();
                cin.ignore();
                cout<<"Bitte geben sie eine Zahl ein."<<endl;
            }
            cout<<"Bitte geben sie den exponeneten ein."<<endl;
            while(!(cin>>b))
            {
                cin.clear();
                cin.ignore();
                cout<<"Bitte geben sie eine Zahl ein."<<endl;
            }
            cout<<"Das ergebnis von "<<a<<" hoch "<<b<<" ist "<<pow(a,b)<<endl;
            break;
        default:
            cout<<"Bitte geben sie w für Wurtzel oder E für exponent ein"<<endl;

    }
}
