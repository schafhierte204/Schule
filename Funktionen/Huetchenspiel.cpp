#include <iostream>
#include <time.h>
using namespace std;

int zufall()
{
    return rand() % 3 + 1;
}

int waehlen()
{
    int wahl;
    bool fehler = false;
    cout << "Bitte wählen sie eins der drei hütchen(1-3)" << endl;
    do
    {
        fehler = false;
        if (!(cin >> wahl))
        {
            cin.clear();
            cin.ignore();
            cout << "Bitte geben sie eine Zahl ein" << endl;
            fehler = true;
        }
        else if (wahl < 1 || wahl > 3)
        {
            cout << "Bitte geben sie eine Zahl zwischen 0 und 4 ein" << endl;
            fehler = true;
        }
    } while (fehler);
    return wahl;
}

void vergleich()
{
    if (zufall() == waehlen())
    {
        cout << "Sie lagen richtig" << endl;
    }
    else
    {
        cout << "Sie haben falsch getippt" << endl;
    }
}
int main()
{
    srand(time(NULL));
    char wahl;
    cout << "Hallo Wollen sie das Spiel Starten?" << endl;
    cin >> wahl;
    if (wahl == 'j')
    {
        do
        {
            vergleich();

            cout << "Wollen sie Nochmal Spielen(j/n)" << endl;
            cin >> wahl;
        } while (wahl == 'j');
    }
}