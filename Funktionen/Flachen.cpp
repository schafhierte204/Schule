#include <iostream>
#include <math.h>
using namespace std;

double umfangR(double a, double b)
{
    return 2*(a+b);
}

double flaecheR(double a, double b)
{
    return a*b;
}

double hypotenuse(double a, double b)
{
    return sqrt((pow(a,2)+pow(b,2)));
}

double flaecheD(double a, double b)
{
    return a*b/2;
}

int main()
{
    char wahl;
    double a,b;
    cout<<"Wollen sie ein Rechteck(R) oder ein Dreieck (D) berechnen"<<endl;
    cin>>wahl;
    cout<<"Bitte geben sie Seiten/Katheten a und b ein"<<endl;
    while(!(cin>>a))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte geben sie eine Zahl ein"<<endl;
    }
    while(!(cin>>b))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte geben sie eine Zahl ein"<<endl;
    }
    switch (wahl)
    {
    case 'R':
        cout<<"Der Umfang beträgt "<<umfangR(a,b)<<", die Fläche ist "<<flaecheR(a,b)<<" groß und die Diagonale beträgt "<<hypotenuse(a,b)<<endl;
        break;
    case 'D':
        cout<<"Die Hypotenuse ist "<<hypotenuse(a,b)<<" groß und die fläche beträgt "<<flaecheD(a,b)<<endl;
        break;
    default:
        cout<<"Bitte geben sie R für Rechteck oder D für Dreieck ein."<<endl;
        break;
    }

}