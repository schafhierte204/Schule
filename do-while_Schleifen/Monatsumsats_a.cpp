#include <iostream>
using namespace std;

int main()
{
    int anzEinnahme=0;
    double sumEinahme=0;
    double einnahme;
    char weiter;

    do
    {
        cout<<"Bitte geben sie die Umsatzzahl ein"<<endl;
        cin>>einnahme;
        anzEinnahme++;
        sumEinahme=sumEinahme+einnahme;

        cout<<"Wollen sie Eine weitere Einahme verbuchen?(j/n)"<<endl;
        cin>>weiter;
    }
    while (weiter=='j');
    cout<<"Sie haben "<<anzEinnahme<<" Einahmen von insgesamt "<<sumEinahme<<" eingegeben"<<endl;
    cout<<"Die Einahmen hatten eine durchschnittliche höhe von "<<sumEinahme/anzEinnahme<<endl;
}
