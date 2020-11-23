#include <iostream>
using namespace std;

main()
{
    int start,stop,schritt;
    int m,b;
    char wahl;
    int y,yalt;
    cout<<"Bitte Geben sie m Ein."<<endl;
    cin>>m;
    cout<<"Bitte Geben sie b Ein."<<endl;
    cin>>b;
    cout<<"Was moechten sie sehen nullstelle(n),wertetabelle(w), Schnittpunkt Y-Achse(y) oder alles(a)"<<endl;
    cin>> wahl;
    if(wahl=='w'||wahl=='a')
    {
        cout<<"Bitte Startwert Eingben :"<<endl;
        cin>> start;
        cout<<"Bitte Endwert Eingeben :"<<endl;
        cin>> stop;
        cout<<"Bitte Shrittweite Eingeben :"<<endl;
        cin>> schritt;
        if(start<stop&&schritt>0)
        {

            for(int i=start;i<=stop;i=i+schritt)
            {
                yalt=y;
                y=i*m+b;
                if((yalt>0&&y<=0)||(yalt<0&&y>=0))
                {
                    cout<<"nullstelle"<<endl;
                }
                if(b<0)
                {
                    cout<<"f("<<i<<")="<<i<<"*"<<m<<b<<"="<<y<<endl;
                }
                else
                {
                    cout<<"f("<<i<<")="<<i<<"*"<<m<<"+"<<b<<"="<<y<<endl;
                }
            }
        }
        else
        {
            cout<<"Bitte Uberprufen sie ihre Eingaben"<<endl;
        }
    }
    if (wahl=='n'||wahl=='a')
    {
        cout<<"N=("<<-b/m<<"|0)"<<endl;
    }
    if (wahl=='y'||wahl=='a')
    {
        cout<<"Sy=(0|"<<b<<")"<<endl;
    }
}
