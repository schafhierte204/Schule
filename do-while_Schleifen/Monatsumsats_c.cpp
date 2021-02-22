#include <iostream>
using namespace std;

int main()
{
    int anzEinnahme=0;
    double sumEinahme=0;
    double proProvi;
    double einnahme;
    char wahl;

    do
    {
        cout<<"Bitte geben sie die Umsatzzahl ein"<<endl;
        do
        {
            cin>>einnahme;
            if(einnahme<0)
            {
                cout<<"Bitte geben sie nur Positive Zahlen ein. \nBitte nochmal eingeben."<<endl;
            }
        }
        while (einnahme<0);
        anzEinnahme++;
        sumEinahme=sumEinahme+einnahme;

        cout<<"Wollen sie Eine weitere Einahme verbuchen?(j/n)"<<endl;
        cin>>wahl;
    }
    while (wahl=='j');
    cout<<"Sie haben "<<anzEinnahme<<" Einahmen von insgesamt "<<sumEinahme<<" Euro eingegeben"<<endl;
    cout<<"Die Einahmen hatten eine durchschnittliche höhe von "<<sumEinahme/anzEinnahme<<" Euro"<<endl;
    cout<<"Bekommen sie eine Pauschale(p) oder individuelle(i) Provision"<<endl;
    cin>>wahl;
    if (wahl=='i')
    {
        if(sumEinahme<10000)
        {
            proProvi=0.05;
        }
        else if(sumEinahme<100000)
        {
            proProvi=0.07;
        }
        else
        {
            proProvi=0.1;
        }
        cout<<"Sie bekommen "<<sumEinahme*proProvi<<" Euro Provision"<<endl;
    }
    else
    {
        cout<<"Sie bekommen 300 Euro Provision."<<endl;
    }

}
