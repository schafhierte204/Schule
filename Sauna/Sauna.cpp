#include <iostream>
using namespace std;

int main()
{
    char geschlecht;
    int alter;
    cout<<"Hallo und Herzlich willkommen zur Schulsauna"<<endl;
    cout<<"Als was Definieren sie sich Mannlich(M) oder Weiblich(W)"<<endl;
    cin>>geschlecht;
    if(geschlecht=='M'||geschlecht=='m'||geschlecht=='W'||geschlecht=='w')
    {
        cout<<"Wie Alt sind Sie?";
        cin>>alter;
        if((geschlecht=='W'||geschlecht=='w')&&alter<18)
        {
            cout<<"Die Offnungzeiten fur die Madchensauna sind taglich von 6-8 Uhr"<<endl;
        }
        else if (geschlecht=='W'||geschlecht=='w')
        {
            cout<<"Die Offnungszeiten fur die Frauensauna sind taglich vin 8-12 Uhr"<<endl;
        }
        else if ((geschlecht=='M'||geschlecht=='m')&&alter<18)
        {
            cout<<"Die Offnungzeiten fur die Jungensauna sind taglich von 13-15 Uhr"<<endl;
        }
        else if (geschlecht=='M'||geschlecht=='m')
        {
            cout<<"Die Offnungzeiten fur die Mannersauna sind taglich fon 15-18 Uhr"<<endl;
        }
    }
    else
    {
        cout<<"Diese Sauna ist in Manlich und weiblich unterteilt bitte Geben sie M oder W ein"<<endl;
    }
}
        
