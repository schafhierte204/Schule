#include <iostream>
using namespace std;

void sternchen(int anzahl)
{
    for(int i=0;i<anzahl;i++)
    {
        cout<<"***********"<<endl;
    }
}

void trennlinie(char zeichen)
{
    cout<<zeichen<<zeichen<<zeichen<<zeichen<<endl;
}
int main()
{
    char zeichen;
    int anzahl;
    cout<<"Welches Zeichen wollen sie in der trennlinie haben."<<endl;
    cin>>zeichen;
    cout<<"Wiefiele Sternchenreihen wollen sie haben"<<endl;
    while(!(cin>>anzahl))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte geben sie eine zahl ein."<<endl;
    }
    cout<<"Jens" <<endl;
    sternchen(anzahl);
    cout<<"Hafemann" <<endl;
    trennlinie(zeichen);
}
