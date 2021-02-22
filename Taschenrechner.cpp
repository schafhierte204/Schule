#include <iostream>
using namespace std;

int main()
{
    double zahl1,zahl2;
    char wahl;
    double erg;
    bool fehler;

    cout<<"Bitte Erste Zahl eingeben :";
    cin>>zahl1;
    cout<<"Bite Zweite Zahl eingeben :";
    cin>>zahl2;
    cout<<"Bitte Wahlen sie eine Rechenoperation aus"<<endl;
    cout<<"+ = Addieren"<<endl<<"- = Subtrahieren"<<endl<<"* = Multiplizieren"<<endl<<"/ = Dividieren"<<endl;
    do
    {
        fehler=false;
        cin>>wahl;
        if (wahl!='+' && wahl!='-' && wahl != '*' && wahl != '/')
        {
            cout<<"Bitte geben sie +,-,*,oder / ein."<<endl;
            fehler=true;
        }
    }
    while(fehler);

    switch(wahl)
    {
        case '+':
            erg=zahl1+zahl2;
            break;
        case '-':
            erg=zahl1-zahl2;
            break;
        case '*':
            erg=zahl1*zahl2;
            break;
        case '/':
            if (zahl2==0)
            {
                cout<<"Durch null dividieren ist Verboten!"<<endl;
                erg=0;
                break;
            }
            erg=zahl1/zahl2;
            break;
        default:
            cout<<"Wahl nicht zutreffend"<<endl;
            erg=0;
    }
    cout<<"Das ergebnis ist:"<<erg;
}
