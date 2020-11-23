#include <iostream>
using namespace std;

main()
{
    char weiter='j';
    double eingabe;
    double summe=0;
    int anzahl=0;
    cout<<"Bitte geben sie ihre zahlen ein"<<endl;
    while(weiter=='j')
    {
        cin>>eingabe;
        if(eingabe>0|eingabe<16)
        {
            summe=summe+eingabe;
            anzahl++;
        }
        else
        {
            cout<<"Die zahl muss positiv sein"<<endl;
        }
        cout<<"Wollen sie noch eine zahl eingeben(j/n)"<<endl;
        cin>>weiter;
    }
    cout<<"Die summe der "<<anzahl<<" Zahlen ist "<<summe<<endl;
    cout<<"Und der Duchnitt ist"<<summe/anzahl<<endl;
}
