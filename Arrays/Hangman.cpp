#include <ctime>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int versuche = 0;
    char worter[10][20]= {
        "Bauernhof",
        "Programmierung",
        "Schule",
        "Array",
        "Integer",
        "Deklarieren",
        "Initalisierung",
        "Compiler",
        "Quellcode",
        "Test"
    };
    int wortauswahl;
    int lange;
    char eingabe;
    bool win = false;
    char ausgabe[20] = {0};

    cout<<" Willkommen zu Hangman\n"<<endl;
    cout<<" Bitte Wälen sie ein wort von 1-10 aus."<<endl;
    cin>>wortauswahl;
    wortauswahl--;

    lange = strlen(worter[wortauswahl]);

    //ausgabe initialisieren
    for (int i = 0;i<lange;i++)
    {
        ausgabe[i]='_';
    }

    do
    {
        for (int i = 0;i<lange;i++)
        {
            cout<<ausgabe[i]<<" ";
        }
        cout<<endl;

        cout<<"Bitte Raten sie einen buchstaben"<<endl;
        cin>>eingabe;
        win =true;

        for (int i = 0;i<lange;i++)
        {
            if(worter[wortauswahl][i]==eingabe)
            {
                ausgabe[i]=eingabe;
            }
            if(worter[wortauswahl][i]!=ausgabe[i])
            {
                win=false;
            }
        }
        versuche++;
    }
    while(!win);
    cout<<"Sie haben für das erraten des wortes "<<ausgabe<<" "<<versuche<<" versuche gebraucht "<<endl;
}
