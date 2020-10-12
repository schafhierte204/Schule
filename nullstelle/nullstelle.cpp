#include <iostream>
#include <ncurses.h>
using namespace std;

main()
{
    char wahl;
    cout<<"Welchen funktionstypen wollen sie"<<endl;
    cout<<"L für lineare funktion"<<endl<<"Q für quadratische funktionen"<<endl;
    cin>>wahl;
    if(wahl=='l'||wahl=='L')
    {
        int m;
        int b;
        cout<<"bitte geben sie m und b in der formel mx+b an"<<endl;
        cin>>m;
        cin>>b;
        cout<<"# yAchsenabschitt=b="<<b<<endl;
        cout<<" Sy(0|"<<b<<")"<<endl<<endl;
        cout<<"# xAchsenabschitt"<<endl;
        cout<<"f(x)=0"<<endl;
        cout<<m<<"x+"<<b<<"=0 |-("<<b<<")"<<endl;
        cout<<m<<"x"<<"="<<-b<<" |:"<<m<<endl;
        cout<<"x="<<-b/m<<endl;
        cout<<" Sx("<<-b/m<<"|0)"<<endl;

    }
        else if (wahl=='q'||wahl=='Q')
        {
            cout<<"quadratisch";
        }
            else
            {
                cout<<"andere funktionen kann ich nicht";
            }
}
