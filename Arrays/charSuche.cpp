#include <iostream>
using namespace std;

int main()
{
    char wort[20];
    char suchbuchstabe;
    int anz;
    char weiter;

    cout<<" Bitte geben sie ein Wort ein."<<endl;
    cin >> wort;
    do
    {
        anz=0;

        cout<<" Bitte geben sie den suchbuchstaben ein."<<endl;
        cin >>suchbuchstabe;

        for(int i = 0;i<20;i++)
        {
            if(wort[i]==suchbuchstabe)
            {
                anz++;
            }
            else if(wort[i]=='\0')
            {
                i=20;
            }
        }
        cout<<"Der Buchstabe "<<suchbuchstabe<<" kam "<<anz<<" mal vor."<<endl;
        cout<<"Wollen sie nach einem weiteren Buchstaben suchen?(j/n)"<<endl;
        cin >> weiter;
    }
    while (weiter=='j');
}
