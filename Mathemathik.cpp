#include <iostream>
using namespace std;

int main()
{
    int zahl1 = 34;
    int zahl2 = 25;
    int zahl3 = 48;
    int wahl;
    cout<<"Die 3 zahlen sind "<<zahl1<<" "<<zahl2<<" "<<zahl3<<endl;
    cout<<"Moechten Sie Die Summe(1), Das Produkt(2), den Mittelwert(3), das Minimum(4) oder das Maximum(5) haben"<<endl;
    cin>>wahl;
    switch(wahl)
    {
        case 1:
            cout<<"Die Summe ist :"<<zahl1+zahl2+zahl3<<endl;
            break;
        case 2:
            cout<<"Das Produkt ist :"<<zahl1*zahl2*zahl3<<endl;
            break;
        case 3:
            cout<<"Der Mittelwert ist :"<<(zahl1+zahl2+zahl3)/3<<endl;
            break;
        case 4:
            if(zahl1<zahl2)
            {
                if(zahl1<zahl3)
                {
                    cout<<"Der Kleinste Wert ist :"<<zahl1<<endl;
                }
                else
                {
                    cout<<"Der Kleinste Wert ist :"<<zahl3<<endl;
                }
            }
            else
            {
                if(zahl2<zahl3)
                {
                    cout<<"Der Kleinste Wert ist :"<<zahl2<<endl;
                }
                else
                {
                    cout<<"Der Kleinste Wert ist :"<<zahl3<<endl;
                }
            }
            break;
        case 5:
            if(zahl1>zahl2)
            {
                if(zahl1>zahl3)
                {
                    cout<<"Der Groeste Wert ist :"<<zahl1<<endl;
                }
                else
                {
                    cout<<"Der Groeste Wert ist :"<<zahl3<<endl;
                }
            }
            else
            {
                if(zahl2>zahl3)
                {
                    cout<<"Der Groeste Wert ist :"<<zahl2<<endl;
                }
                else
                {
                    cout<<"Der Groeste Wert ist :"<<zahl3<<endl;
                }
            }
            break;

    }
}
