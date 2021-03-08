#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double k1,k2;
    double w1,w2;
    double pi = 3.1415926535;
    bool fehler=false;
    cout<<"Bitte Geben sie die erste Kathete ein."<<endl;
    do
    {
        fehler=false;
        if(cin>>k1){}
        else
        {
            cin.clear();
            cin.ignore();
            fehler=true;
            cout<<"Bitte Geben sie eine Zahl ein."<<endl;
        }
        if(k1<0)
        {
            cout<<"Bitte Geben sie eine positive Zahle ein"<<endl;
            fehler=true;
        }
    }
    while(fehler);
    cout<<"Bitte geben sie die zweite Kathete ein."<<endl;
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
    cout<<"Die Hypothenuse ist "<<sqrt(pow(k1,2)+pow(k2,2))<<endl;
    cout <<"Der Erste Winkel beträgt "<<atan(k1/k2)*180/pi<<"°"<<endl;
    cout<<"Der Zweite Winkel Beträgt "<<atan(k2/k1)*180/pi<<"°"<<endl;

}
