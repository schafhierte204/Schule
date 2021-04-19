#include <iostream>
using namespace std;

int main()
{
    char wort[20]={0};
    char wahl,trenn;

    cout<<"Bitte Geben sie ihren Namen ein"<<endl;
    cin>>wort;

    cout<<"Wollen sie Ihren Nahme Normal(n),Untereinander(u), mit trennzeichen(t), oder rückwärtz(r) sehen"<<endl;
    cin>>wahl;

    switch (wahl)
    {
        case 'n':
        cout<<wort;
        break;

        case 'u':
        cout<<endl;
        for (int i=0;i<20;i++)
        {
            cout<<wort[i]<<endl;
            if ( wort[i]=='\0')
            {
                i=20;
            }
        }
        break;

        case 't':
        cout<<"Bitte Geben sie das trennzeichen ein"<<endl;
        cin>>trenn;
        for(int i=0;i<20;i++)
        {
            cout<<wort[i]<<trenn;
            if ( wort[i]=='\0')
            {
                i=20;
            }
        }
        cout<<endl;
        break;

        case 'r':
        for(int i=19;i>=0;i--)
        {
            cout<<wort[i];
        }
        cout<<endl;
        break;

        default:
        cout<<"Bitte geben sie n,u,t oder r ein."<<endl;
    }
}
