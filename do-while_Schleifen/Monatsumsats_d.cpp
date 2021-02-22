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
        anzEinnahme=0;
        sumEinahme=0;
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
        do
        {
            cin>>wahl;
            if (wahl!='i'&&wahl!='p')
            {
                cout<<"Bitte geben sie i vuer individuelle oder p vuer pauschale Provision ein."<<endl;
            }
        }
        while (wahl!='i'&&wahl!='p');
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
        cout<<"Wollen sie das Programm noch einmahl starten?(j/n)"<<endl;
        cin>>wahl;
    }
    while (wahl=='j');
}
