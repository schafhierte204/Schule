#include <iostream>
using namespace std;


int addieren(int zahl1,int zahl2, int zahl3)
{
    int ergebnis;
    ergebnis = zahl1+zahl2+zahl3;
    return ergebnis;
}

int multiplizieren(int zahl1,int zahl2,int zahl3)
{
    int ergebnis;
    ergebnis=zahl1*zahl2*zahl3;
    return ergebnis;
}

int main()
{
    int zahl1,zahl2,zahl3;
    int ergebnis;
    double proz;
    char wahl;
    cout<<"Bitte geben sie die 3 Zahlen ein"<<endl;
    while(!(cin>>zahl1))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte geben sie eine Zahl ein."<<endl;
    }
    while(!(cin>>zahl2))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte geben sie eine Zahl ein."<<endl;
    }
    while(!(cin>>zahl3))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte geben sie eine Zahl ein."<<endl;
    }
    cout<<"wollen sie die Zahlen Addieren(a) oder Multiplizieren(m)"<<endl;
    cin>>wahl;
    cout<<"wiefiel prozent wollen sie vom ergebnis sehen"<<endl;
    cin>>proz;
    proz= proz/100;

    switch(wahl)
    {
        case 'a':
            ergebnis = addieren(zahl1,zahl2,zahl3);
            cout<<ergebnis*proz<<endl;
            break;
        case 'm':
            ergebnis = multiplizieren(zahl1,zahl2,zahl3);
            cout<<ergebnis*proz<<endl;
            break;
        default:
            cout<<"Bitte geben sie a oder m ein."<<endl;
    }
}
