#include <iostream>
using namespace std;

int main()
{
    char wort[20];
    char suchbuchstabe;
    int anz;
    char weiter;
    int i = -1;

    cout<<" Bitte geben sie ein Wort ein."<<endl;
    cin >> wort;
    do
    {
        anz=0;

        cout<<" Bitte geben sie den suchbuchstaben ein."<<endl;
        cin >>suchbuchstabe;

        do
        {
            if(wort[i]==suchbuchstabe)
            {
                anz++;
            }
            i++;
        }
        while(wort[i]!='\0');

        cout<<"Der Buchstabe "<<suchbuchstabe<<" kam "<<anz<<" mal vor."<<endl;
        cout<<"Wollen sie nach einem weiteren Buchstaben suchen?(j/n)"<<endl;
        cin >> weiter;
    }
    while (weiter=='j');
}
