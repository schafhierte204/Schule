#include <iostream>
using namespace std;

int main()
{
    double zahl1,zahl2;
    int wahl;
    double erg;

    cout<<"Bitte Erste Zahl eingeben :";
    cin>>zahl1;
    cout<<"Bite Zweite Zahl eingeben :";
    cin>>zahl2;
    cout<<"Bitte Wahlen sie eine Rechenoperation aus"<<endl;
    cout<<"1 = Addieren"<<endl<<"2 = Subtrahieren"<<endl<<"3 = Multiplizieren"<<endl<<"4 = Dividieren"<<endl;
    cin>>wahl;

    if(wahl==1)
    {
        erg=zahl1+zahl2;
    }
    else if(wahl==2)
    {
        erg=zahl1-zahl2;
    }
    else if(wahl==3)
    {
        erg=zahl1*zahl2;
    }
    else if(wahl==4)
    {
        erg=zahl1/zahl2;
    }
    else 
    {
        cout<<"Wahl nicht zutreffend"<<endl;
        erg=0;
    }

    cout<<"Das ergebnis ist:"<<erg;
}
