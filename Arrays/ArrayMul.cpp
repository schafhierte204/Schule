#include <iostream>

using namespace std;

int main()
{
    int zahlen[10];
    int mul;

    //Eingabe
    for(int i=0;i<10;i++)
    {
        cout<<"Bitte geben sie die "<<i+1<<"zahl ein"<<endl;
        while(!( cin>>zahlen[i]))
        {
            cin.clear();
            cin.ignore();
            cout<<"Bitte Geben sie eine Zahl ein"<<endl;
        }
    }
    cout<<"Bitte Geben sie Den Multiplizierer ein"<<endl;
    while(!(cin>>mul))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte Geben sie eine Zahl ein"<<endl;
    }

    for(int i=0;i<10;i++)
    {
        zahlen[i]=zahlen[i]*mul;
    }

    //Ausgabe
    //-------------------------------------------------------------------------
    cout<<"Das Ergebnis ist ";
    for(int i=0;i<10;i++)
    {
        cout<<zahlen[i]<<", ";
    }
    cout<<endl;
}
