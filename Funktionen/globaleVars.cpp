#include <iostream>
using namespace std;

double zahlen[30] = {0};
void einlesen(int anzahl)
{
    for( int i = 0;i<anzahl;i++)
    {
        cin>>zahlen[i];
    }
}
double summe()
{
    double summe = 0;
    for (int i=0;i<30;i++)
    {
        summe=summe+zahlen[i];
    }
    return summe;
}
int main()
{
    int anzahl;
    cout<<"Wiefiele zahlen wollen sie eingeben"<<endl;
    cin>>anzahl;
    cout<<"Bitte geben sie die Zahlen ein"<<endl;
    einlesen(anzahl);
    cout<<"Die summe ihrer zahlen beträgt "<<summe()<<endl;
}