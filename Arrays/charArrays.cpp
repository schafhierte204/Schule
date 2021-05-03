#include <iostream>
using namespace std;

int main()
{
    char wort[20]={0};
    char wahl,trenn;
    int i = -1;

    cout<<"Bitte Geben sie ihren Namen ein"<<endl;
    cin>>wort;

    cout<<"Wollen sie Ihren Nahme Normal(n),Untereinander(u), mit trennzeichen(t), oder rückwärtz(r) sehen"<<endl;
    cin>>wahl;

    switch (wahl)
    {
        // normal
        case 'n':
        cout<<wort;
        break;

        //Untereinanger
        case 'u':
        cout<<endl;
        do
        {
            cout<<wort[i]<<endl;
            i++;
        }
        while(wort[i]!='\0');
        break;

        // Mit trennzeichen
        case 't':
        cout<<"Bitte Geben sie das trennzeichen ein"<<endl;
        cin>>trenn;
        do
        {
            cout<<wort[i]<<trenn;
            i++;
        }
        while(wort[i]!='\0');
        cout<<endl;
        break;

        //rueckwaertz
        case 'r':
        for(int i=19;i>=0;i--)
        {
            cout<<wort[i];
        }
        cout<<endl;
        break;

        // Falsche eingabe
        default:
        cout<<"Bitte geben sie n,u,t oder r ein."<<endl;
    }
}
