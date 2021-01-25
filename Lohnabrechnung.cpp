#include <iostream>
using namespace std;

int main()
{
    int stunden;
    int lohn;
    char wahl;
    char weiter;
    do
    {
        cout<<"Wiefiele Stunden wurden abgeleistet?"<<endl;
        do
        {
            cin>>stunden;//keine zahleneigabe-> programm crashes
            if(stunden<0)
            {
                cout<<"Negative Stunden können nicht berechnet werden"<<endl;
                cout<<"Bitte geben sie eine Positive Stundenzahl ein"<<endl;
            }
        }
        while(stunden<0);
        cout<<"Welche art von Stunden soll Berechnet Werden:"<<endl
            <<"Senior-Meisterstunden(s)"<<endl
            <<"Junior-Meisterstunden(j)"<<endl
            <<"Gesellenstunden(g)"<<endl
            <<"Lehrlingsstunden(l)"<<endl
            <<"Praktikantenstunden(p)"<<endl;
        cin>>wahl;
        switch(wahl)
        {
            case 's':
                cout<<"Sie berechnen Senior-Meisterstunden"<<endl;
                lohn=stunden*48;
                if(stunden>8)
                {
                    lohn=lohn*1.1;
                }
                break;
            case 'j':
                cout<<"Sie berechnen Junior-Meisterstunden"<<endl;
                lohn=stunden*43;
                if(stunden>8)
                {
                    lohn=lohn*1.1;
                }
                break;
            case 'g':
                cout<<"Sie berechnen Gesellenstunden"<<endl;
                lohn=stunden*38;
                break;
            case 'l':
                cout<<"Sie berechnen Lehrlingsstunden"<<endl;
                lohn=stunden*18;
                break;
            case 'p':
                cout<<"Sie berechnen Praktikantenstunden"<<endl;
                lohn=stunden*8;
                break;
            default:
                cout<<"Diese art von stunden kenne ich nicht"<<endl;
                lohn=0;
        }
        cout<<"Der Lohn Betraegt "<<lohn<<endl;
        cout<<"Wollen sie eine Weitere Berechnung machen?(j/n)"<<endl;
        cin>>weiter;
    }
    while(weiter=='j');
}
