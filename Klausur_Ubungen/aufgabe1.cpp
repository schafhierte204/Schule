#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char geschlecht;
    char nachname[20] = {0};
    int zahlen[8] = {0};
    int wunschzahl;                     //zu suchende Zahl
    int anzahl =0;                      //anzahl der wnschzahl im Array
    int summe = 0;                      //summe der Zahlen im Array
    bool fehler = false;                //fasche eingabe
    char name[30] = {0};
    char vorname[10] = {0};
    bool ende = false;
    char wahl;
    int i=0;
    int j=0;
    cout<<"Wollen sie Aufgabe 1 oder 2 Ausführen"<<endl;
    cin>>wahl;

    switch(wahl)
    {
        case '1' :

            //Begrüßung
            cout<<"Hallo, bitte gebens sie Ihr geschlecht (m/w) und ihren nachnamen ein."<<endl;
            cin>>geschlecht;
            cin>>nachname;

            //Füllen des Arrays mit 8 positiven Zahlen
            cout<<"Bitte geben sie acht positive zahlen ein"<<endl;
            for (int i = 0;i<8;i++)
            {
                cout<<"Nächste Zahl"<<endl;
                do
                {
                    fehler=false;
                    if(!(cin>>zahlen[i]))
                    {
                        cin.clear();
                        cin.ignore();
                        cout<<"Bitte geben sie eine Zahl ein."<<endl;
                        fehler=true;
                    }
                    else if (zahlen[i]<0)
                    {
                        cout<<"Bitte geben sie eine positive Zahl ein."<<endl;
                        fehler=true;
                    }
                }
                while(fehler);
            }

            //eingabe der Suchzahl
            cout<<"Bitte geben sie eine positive Suchzahl ein"<<endl;
            do
            {
                fehler=false;
                if(!(cin>>wunschzahl))
                {
                    cin.clear();
                    cin.ignore();
                    cout<<"Bitte geben sie eine Zahl ein."<<endl;
                    fehler=true;
                }
                else if(wunschzahl<0)
                {
                    cout<<"Bitte geben sie eine positive Zahl ein."<<endl;
                    fehler=true;
                }
            }
            while(fehler);

            //Anzahl der Wunschzahl bestimmen
            for (int i=0;i<8;i++)
            {
                if(zahlen[i]==wunschzahl)
                {
                    anzahl++;
                }
            }

            //Summe berechnen
            for (int i=0;i<8;i++)
            {
                summe=summe+zahlen[i];
            }

            summe=pow(summe,wunschzahl);

            //Ausgabe nach Geschlechtern getrennt
            switch(geschlecht)
            {
                case 'm':
                    cout<<"Hallo Herr "<<nachname<<" Ihr Ergebnis lautet "<<summe<<"."<<endl;
                    break;
                case 'w':
                    cout<<"Hallo Frau "<<nachname<<" Ihr Ergebnis lautet "<<summe<<"."<<endl;
                    break;
                default:
                    cout<<"Hallo Ihr Ergebnis lautet "<<summe<<"."<<endl;
            }
            break;
        case '2':
            cout<<"Bitte geben sie ihren vornamen und nachnamen getrennt mit einem bindestrich ein."<<endl;
            cin>>name;

            //Arrays bei - aufteilen
            do
            {
                if(name[i]=='\0')
                {
                    ende=true;
                }
                else if(name[i]!='-')
                {
                    vorname[i]=name[i];
                }
                else
                {
                    ende=true;
                }
                i++;
            }
            while(!ende);
            ende=false;
            do
            {
                if(name[i]!='\0')
                {
                    nachname[j]=name[i];
                }
                else
                {
                    ende=true;
                }
                j++;
                i++;
            }
            while(!ende);
            cout<<nachname<<" "<<vorname<<endl;
            break;
        default:
            cout<<"Diese Aufgabe Kenne ich nicht"<<endl;
    }
}
