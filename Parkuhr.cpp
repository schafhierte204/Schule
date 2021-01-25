#include <iostream>
using namespace std;

int main()
{
    int einstunde,ausstunde;
    int einminute,ausminute;
    double minuten;
    double preis = 2.50;
    cout<<"Bitte geben sie die Einfahrtszeit ein in stunde und minute";
    cin>>einstunde;
    cin>>einminute;
    if(einstunde>=24||einstunde<0||einminute<0||einminute>=60)
    {
        cout<<"Bitte Geben sie eine Uhrzeit ein";
    }
    else
    {
        cout<<"Bitte geben sie die Ausfahrtszeit ein in stunde und minute";
        cin>>ausstunde;
        cin>>ausminute;
        if(ausstunde>=24||ausstunde<0||ausminute<0||ausminute>=60)
        {
            cout<<"Bitte Geben sie eine Uhrzeit ein";
        }
        else if (ausstunde<einstunde)
        {
            cout<<"Sie haben die Zahlen verwechselt";
        }
        else
        {
            minuten=(ausstunde-einstunde)*60-einminute+ausminute;
            cout<<"Sie muessen fuer "<<minuten<<" minuten "<<minuten/60*preis<<" Euro Zahlen";
        }
    }
}
