#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    double a,p,q,x;
    double rt;
    char wahl;

    cout<<"Bitte geben sie a, b, c in der funktion ax²+bx+c ein"<<endl;
    while(!(cin>>a))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte Geben sie eine Zahl ein"<<endl;
    }
    while(!(cin>>p))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte Geben sie eine Zahl ein"<<endl;
    }
    while(!(cin>>q))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte Geben sie eine Zahl ein"<<endl;
    }

    //auswahl
    cout<<"Wollen sie die Nullstellen (n), einen y-Wert (y), oder die x-Werte Berechnen"<<endl;
    cin>>wahl;
    switch (wahl)
    {
        case 'n':
        //a rausdividieren
        p=p/a;
        q=q/a;

        rt=pow(p/2,2)-q;
        if(rt<0)
        {
            cout<<"Es Gibt keine Nullstelle"<<endl;
        }
        else if(rt==0)
        {
            cout<<"Es Gibt eine Nullstelle"<<endl;
            cout<<"N("<<p/2<<"|0)"<<endl;
        }
        else
        {
            cout<<"Es gibt zwei Nullstellen"<<endl;
            rt=sqrt(rt);
            cout<<"N("<<p/2+rt<<"|0)"<<endl;
            cout<<"N("<<p/2-rt<<"|0)"<<endl;
        }
        break;

        case 'y':
            cout<<"Bitte Geben sie den x-Wert Ein"<<endl;
            while(!(cin>>x))
            {
                cin.clear();
                cin.ignore();
                cout<<"Bitte Geben sie eine Zahl ein."<<endl;
            }
            cout<<"Der y-Wert ist: "<<a*pow(x,2)+p*x+q<<endl;
    }
}
