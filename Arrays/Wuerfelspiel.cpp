#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
    int wunschzahl, wunschanzahl;
    int anzahl = 0;
    int wuerfe[3];
    bool fehler;
    char vohrname[20];
    char nachname[50];
    
    cout<<"Hallo Bitte geben sie ihren Vor und Nachnahmen ein."<<endl;
    cin>>vohrname;
    cin>>nachname;
    cout<<"Bei diesem Wufelspiel wuerfelt der Computer dreimal und sie sollen vorhersagen wie oft eine von ihnen Ausgewählte zahl vorkommt wenn die zahl so oft oder heufiger vorkommt gewinnen sie"<<endl;

    //Wunschzahl eingabe
    cout<<"Bitte geben sie ihre Wunschzahl ein"<<endl;
    do
    {
        fehler=false;
        if(!(cin>>wunschzahl))
        {
            //keine Zahl
            cin.clear();
            cin.ignore();
            cout<<"Bitte geben sie eine Zahle ein."<<endl;
            fehler=true;
        }
        else if (wunschzahl<0||wunschzahl>6)
        {
            cout<<"Bitte geben sie eine Zahl zwischen 0 und 6 ein"<<endl;
            fehler=true;
        }
    }
    while(fehler);

    //Wunschanzahl eingabe
    cout<<"Bitte geben sie ein wie oft ihre Wunschzahl vorkommen soll"<<endl;
    do
    {
        fehler=false;
        if(!(cin>>wunschanzahl))
        {
            //keine Zahl
            cin.clear();
            cin.ignore();
            cout<<"Bitte geben sie eine Zahle ein."<<endl;
            fehler=true;
        }
        else if (wunschanzahl<0||wunschanzahl>3)
        {
            cout<<"Bitte geben sie eine Zahl zwischen 0 und 3 ein"<<endl;
            fehler=true;
        }
    }
    while(fehler);

    // zufallszahlen generieren
    srand(time(NULL));
    for (int i=0;i<3;i++)
    {
        wuerfe[i]=1+(rand()%6); // modulo 6 = 0-5 
    }

    //anzahl der Wunschzahl im Array berechnen
    for (int i=0;i<3;i++)
    {
        if(wuerfe[i]==wunschzahl)
        {
            anzahl++;
        }
    }

    //gewinnermitlung und ausgabe
    if(wunschzahl>=anzahl)
    {
        cout<<"Hallo "<<vohrname<<" "<<nachname<<",\n"
            <<"sie haben "<<pow(wunschzahl, anzahl)<<" Euro gewonnen."<<endl;
    }
    else
    {
        cout<<"Hallo "<<vohrname<<" "<<nachname<<",\n"
            <<"sie haben "<<pow(wunschanzahl, wunschzahl)<<" Euro verlohren."<<endl;
    }
    cout<<"Gewürfelt wurden folgende Zahlen: ";
    for (int i = 0;i<2;i++)
    {
        cout<<wuerfe[i]<<"; ";
    }
    cout<<wuerfe[3]<<"."<<endl;
}

