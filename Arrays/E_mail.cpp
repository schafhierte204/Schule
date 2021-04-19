#include <iostream>
using namespace std;

int main()
{
    char eingabe[50] ={0};
    bool found = false;

    cout<<"Bitte Geben sie ihre E-mail Adresse ein."<<endl;
    do
    {
        cin >> eingabe;
        for( int i=0;i<50;i++)
        {
            if(eingabe[i]=='@')
            {
                found=true;
                i=50;
            }
            else if(eingabe[i]=='\0')
            {
                i=50;
            }
        }
        if(!found)
        {
            cout<<"Bitte geben sie ihre E-mail Adresse nochmal ein."<<endl;
        }
    }
    while (!found);

    cout<<"Ihre E-mail Adresse lautet: "<<eingabe<<endl;
}
