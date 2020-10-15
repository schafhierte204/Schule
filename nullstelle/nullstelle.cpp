#include <iostream>
#include <ncurses.h>
#include <cmath>
using namespace std;

int main()
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
        cout<<"bitte gebn sie die form ser funktion an:"<<endl;
        cout<<"S = Scheitelpunktform"<<endl<<"N = Normalform"<<endl<<"U = Nullstellenform"<<endl;
        cin>>wahl;
        if(wahl == 'S'||wahl == 's')
        {
            double a,sx,sy,sqr;
            cout<<"sie haben die Scheitelpunktform ausgewählt bitte geben sie a,Sx,Sy an"<<endl;
            cin>>a;
            cin>>sx;
            cin>>sy;
            cout<<"# Y-Achse"<<endl;
            cout<<"f(0)"<<endl;
            cout<<"a(x-Sx)²+Sy"<<endl;
            cout<<a<<"(0-"<<sx<<")²+"<<sy<<endl;
            sqr=pow((0-sx),2);
            cout<<a<<"*"<<sqr<<"+"<<sy<<endl;
            cout<<a*sqr+sy<<endl;
            if(a>0&&sy>0||(a<0&&sy<0))
            {
                cout<<"Es gibt keine nullstelle"<<endl;
            }
            else
            {

                cout<<"# X-Achse"<<endl;
                cout<<"f(x)=0"<<endl;
                cout<<"a(x-Sx)²+Sy=0"<<endl;
                cout<<a<<"(x-"<<sx<<")²+"<<sy<<"=0  |-("<<sy<<")"<<endl;
                cout<<"(x-"<<sx<<")²="<<-sy/a<<"  |√"<<endl;
                sqr=sqrt(-sy/a);
                cout<<"x-"<<sx<<"=±"<<sqr<<"  |+"<<sx<<endl;
                cout<<"x1/x2="<<sx<<"±"<<sqr<<endl;
                cout<<"x1="<<sx+sqr<<endl;
                cout<<"x2="<<sx-sqr<<endl;
            } 
        }
        else
        {
            cout<<"Diese Form kenne ich nicht";
        }
    }
    else
    {
        cout<<"andere funktionen kann ich nicht";
    }
}
