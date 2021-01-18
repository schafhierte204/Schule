#include <iostream>
using namespace std;

main()
{
    char weiter;
    double eingabe;
    double summe=0;
    int anzahl=0;
    cout<<"Bitte geben sie ihre zahlen ein"<<endl;
    do
    {
        cin>>eingabe;
        if(eingabe>=0||eingabe<16)
        {
            summe=summe+eingabe;
            anzahl++;
        }
        else
        {
            cout<<"Die zahl muss zwischen 0 und 15 liegen"<<endl;
        }
        cout<<"Wollen sie noch eine zahl eingeben(j/n)"<<endl;
        cin>>weiter;
    }
    while(weiter=='j');
    cout<<"Die summe der "<<anzahl<<" Zahlen ist "<<summe<<endl;
    cout<<"Wollens sie den durchschnitt sehen?"<<endl;
    cin>>weiter;
    if(weiter=='j')
    {
        cout<<"Und der Durchschnitt ist"<<summe/anzahl<<endl;
    }
}
