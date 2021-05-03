#include <iostream>
using namespace std;

int main()
{
    char eingabe[20];
    int lange = -1;

    cout<<" Bitte geben sie ein wort ein"<<endl;
    cin>>eingabe;
    do
    {
        lange++;
    }
    while (eingabe[lange]!='\0');
    cout<<" das wort ist "<<lange<<" Buchstaben lang"<<endl;
}
