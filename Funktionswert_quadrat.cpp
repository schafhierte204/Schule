#include <iostream>
using namespace std;

int main()
{
    double x,erg;
    cout<<"Bitte Funktionswert Eingben :"<<endl;
    cin >> x;
    erg=3*x*x+7;
    if(erg<0)
    {
        cout<<"Das Ergebnis ist negativ"<<endl;
    }
    else if(erg==0)
    {
        cout<<"Das ist die Nullstelle"<<endl;
    }
    else
    {
        cout<<"Das Ergebnis ist positiv"<<endl;
    }
    cout<<erg<<"=3*x^2+7";
}  
