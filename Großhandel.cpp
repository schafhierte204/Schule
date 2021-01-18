#include <iostream>
using namespace std;

int main()
{
    char food,wahl='j'; //While das erste mahl war
    int anzahl=0,anzahlf=0,anzahlnf=0,anzahlg=0;
    double sumf=0,sumnf=0;
    double preis=0;
    while(wahl=='j') //While Schleife //While Schleife
    {
        cout<<"Bitte geben sie nund preis, anzahl,und food(f) oder Non-food(n) ein."<<endl;
        cin>>preis;
        cin>>anzahl;
        cin>>food;
        if(food=='f')
        {
            sumf+=preis;
            anzahlf+=anzahl;
            anzahlg+=anzahl;
            cout<<"Wollen sie einen weiteren artikel hinzufügen(j/n)"<<endl;
            cin>>wahl;
        }
        else if (food=='n')
        {
            sumnf+=preis;
            anzahlnf+=anzahl;
            anzahl+=anzahl;
            cout<<"Wollen sie einen weiteren artikel hinzufügen(j/n)"<<endl;
            cin>>wahl;
        }
        else
        {
            cout<<"bitte geben sie f fur food und n fur non-food ein"<<endl;
            wahl='j';
        }
    }
    cout<<anzahlf<<" food items fur "<<sumf<<" zu 7\% also"<<sumf*1.07<<endl
        <<endl
        <<anzahlnf<<" non-food items fur "<<sumnf<<" zu 19\% also"<<sumnf*1.19<<endl
        <<endl
        <<"Insgesamt "<<anzahl<<" items zu "<<sumf*1.07+sumnf*1.19<<endl;

}
