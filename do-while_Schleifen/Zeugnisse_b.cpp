#include <iostream>
using namespace std;

int main()
{
    double note;
    double durchFach;
    double sumFach=0;
    double anzFach=0;
    double sumNoten=0;
    double anzNoten=0;
    char weiter;
    cout <<"Bitte geben sie Die Noten ein."<<endl;
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
    cout<<"Ihr Zeugniss durchschnitt Beträgt: "<<sumFach/anzFach<<endl;
}
