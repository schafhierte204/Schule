#include <iostream>
using namespace std;

int main()
{
    char eingabe[20];
    int lange = 0;
    bool end = false;

    cout<<" Bitte geben sie ein wort ein"<<endl;
    cin>>eingabe;
    do
    {
        if ( eingabe[lange]=='\0')
        {
            end=true;
        }
        else
        {
        lange++;
        }
    }
    while (!end);
    cout<<" das wort ist "<<lange<<" Buchstaben lang"<<endl;
}
