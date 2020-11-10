#include <iostream>
using namespace std;

main()
{
    double start,stop,schritt;
    double a,b;
    COUt<<"Bitte Geben sie a Ein."<<endl;
    cin>>a;
    cout>>"Bitte Geben sie b Ein."<<endl;
    cin>>b;
    cout<<"Bitte StartWert Eingben :"<<endl;
    cin>> start;
    cout<<"Bitte Endwert Eingeben :"<<endl;
    cin>> stop;
    cout<<"Bitte Shrittweite Eingeben :"<<endl;
    cin>> schritt;
    if(start<stop&&schritt>0)
    {
        for(int i=start;i<stop;i=i+schritt)
        {
            cout<<i<<"="<<i*3+5<<endl;
        }
    }
    else
    {
        cout<<"Bitte Uberprufen sie ihre Eingaben"<<endl;
    }
}
