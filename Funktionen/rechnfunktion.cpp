#include <iostream>
using namespace std;


void addieren(int zahl1,int zahl2, int zahl3)
{
    int ergebnis;
    ergebnis = zahl1+zahl2+zahl3;
    cout<<ergebnis<<endl;
}

void multiplizieren(int zahl1,int zahl2,int zahl3)
{
    int ergebnis;
    ergebnis=zahl1*zahl2*zahl3;
    cout<<ergebnis<<endl;
}

int main()
{
    int zahl1,zahl2,zahl3;
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
    switch(wahl)
    {
        case 'a':
            addieren(zahl1,zahl2,zahl3);
            break;
        case 'm':
            multiplizieren(zahl1,zahl2,zahl3);
            break;
        default:
            cout<<"Bitte geben sie a oder m ein."<<endl;
    }
}
