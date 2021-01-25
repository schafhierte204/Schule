#include <iostream>
using namespace std;

int main()
{
    double zeit,betrag;
    char wahl;

    cout<<"Willkommen...Moechten Sie stundenweise (s) oder tageweise (t) parken?"<<endl;
    cin>>wahl;
    switch (wahl)
    {
        case 's':
        case 'S':
            cout<<"Wie viele Stunden?"<<endl;
            cin>>zeit;
            if (zeit<=8)
            {
                betrag=zeit*1.5*0.5;
            }
            else if (zeit<24)
            {
                betrag=12;
            }
            else
            {
                cout<<"Waelen Sie eine Tageskarte!"<<endl;
                betrag=0;
            }
            cout<<"Bitte zahlen Sie "<<betrag<<" Euro"<<endl;
            break;
        case 't':
        case 'T':
            cout<<"Wie viele Tage?"<<endl;
            cin>>zeit;
            if (zeit<30)
            {
                betrag=zeit*12*0.9;
            }
            else if (zeit>5)
            {
                betrag=zeit*12*0.95;
            }
            else
            {
                betrag=zeit*12;
            }
            cout<<"Bitte zahlen Sie "<<betrag<<" Euro"<<endl;
            break;
        default:
            cout<<"Ungültige Eingabe"<<endl;
    }

}


