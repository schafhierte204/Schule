#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double hyp,k2,tmp;
    double pi = 3.1415926535;
    bool fehler=false;
    cout<<"Bitte Geben sie die erste Seite ein"<<endl;
    do
    {
        fehler=false;
        if(cin>>hyp){}
        else
        {
            cin.clear();
            cin.ignore();
            fehler=true;
            cout<<"Bitte Geben sie eine Zahl ein."<<endl;
        }
        if(hyp<0)
        {
            cout<<"Bitte Geben sie eine positive Zahle ein"<<endl;
            fehler=true;
        }
    }
    while(fehler);
    cout<<"Bitte geben sie die zweite Seite ein."<<endl;
    do
    {
        fehler=false;
        if(cin>>k2){}
        else
        {
            cin.clear();
            cin.ignore();
            fehler=true;
            cout<<"Bitte Geben sie eine Zahl ein."<<endl;
        }
        if(k2<0)
        {
            cout<<"Bitte Geben sie eine positive Zahle ein"<<endl;
            fehler=true;
        }
    }
    while(fehler);

    if(k2>hyp) // tauschen wenn kathete länger
    {
        tmp=hyp;
        hyp=k2;
        k2=tmp;
    }

    cout<<"Die zweite Kathete ist "<<sqrt(pow(hyp,2)-pow(k2,2))<<endl;
    cout<<"Der Erste Winkel beträgt "<<asin(k2/hyp)*180/pi<<"°"<<endl;
    cout<<"Der Zweite Winkel beträgt "<<acos(k2/hyp)*180/pi<<"°"<<endl;

}
