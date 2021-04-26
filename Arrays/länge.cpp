#include <iostream>
using namespace std;

int main()
{
    char eingabe[20];
    int lange = 0;
    bool weiter = true;

    cout<<" Bitte geben sie ein wort ein"<<endl;
    cin>>eingabe;
    do
    {
        if ( eingabe[lange]=='\0')
        {
            weiter=false;
        }
        else
        {
        lange++;
        }
    }
    while (weiter);
    cout<<" das wort ist "<<lange<<" Buchstaben lang"<<endl;
}
