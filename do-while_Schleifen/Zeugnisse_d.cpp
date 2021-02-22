#include <iostream>
using namespace std;

int main()
{
    double note;
    double durchSchueler;
    double anzSchueler=0;
    double sumSchueler=0;
    double durchFach;
    double sumFach;
    double anzFach;
    double sumNoten;
    double anzNoten;
    char weiter;
    do
    {
        sumFach=0;
        anzFach=0;
        do
        {
            sumNoten=0;
            anzNoten=0;
            do
            {
                cout<<"Bitte Geben sie eine Note Ein"<<endl;
                cin>>note;
                anzNoten++;
                sumNoten=sumNoten+note;
                cout<<"Wollen sie eine Weitere Note Für diese Fach eingeben?(j/n)"<<endl;
                cin>>weiter;
            }
            while(weiter=='j');
            durchFach=sumNoten/anzNoten;
            cout <<"Der Durchschnitt fürs fach beträgt: "<<durchFach<<endl;
            anzFach++;
            sumFach=sumFach+durchFach;
            cout <<"Wollen sie ein weiteres Fach hinzufügen?(j/n)"<<endl;
            cin >> weiter;
        }
        while (weiter=='j');
        durchSchueler=sumFach/anzFach;
        cout<<"Ihr Zeugniss durchschnitt Beträgt: "<<durchSchueler<<endl;
        anzSchueler++;
        sumSchueler=sumSchueler+durchSchueler;
        cout<<"Will ein weiterer Schüler seine Noten auswerten?(j/n)"<<endl;
        cin>>weiter;
    }
    while (weiter=='j');
    cout<<"Der Klassendurchschnitt betraegt: "<<sumSchueler/anzSchueler<<endl;
}
