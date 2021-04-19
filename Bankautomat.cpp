#include <iostream>
using namespace std;

int main()
{
    int kstd=500;
    char password[9]="password";
    char eingabe[9];
    int dispo=10;
    bool passw_correct = true;
    int ausbz;
    char wahl;
    cout<<"Hallo , Bitte geben sie ihr Password ein"<<endl;
    cin >> eingabe;
    for(int i=0;i<9;i++)
    {
        if(eingabe[i]!=password[i])
        {
            passw_correct=false;
        }
    }

    if(passw_correct)
    {

        cout<<"Moechten sie ihren kontostand sehen?"<<endl<<"Dann geben sie K ein :";
        cin>>wahl;
        if(wahl=='K'||wahl=='k')
        {
            cout<<"Sie haben "<<kstd<<" Euro auf dem Konto";
        }
        else
        {
            cout<<"Bitte Geben Sie den Betrag ein den sie Abbuchen Wollen ";
            cin>>ausbz;
            if(ausbz>kstd+kstd/100*dispo)
            {
                cout<<"Sie Ueberziehen ihr konto zufiel"<<endl;
            }
            else if(ausbz>kstd)
            {
                cout<<"Ihr Guthaben betraegt nur "<<kstd<<" Euro"<<endl;
                cout<<"Wollen sie ihr Konto uberziehen (J/N)? ";
                cin>>wahl;
                if(wahl=='J'||wahl=='j') 
                {
                    kstd=kstd-ausbz;
                }
            }
            else
            {
                cout<<"sie erhalten Hiermit den gewuenschten Betrag von "<<ausbz<<" Euro"<<endl;
                kstd=kstd-ausbz;
            }

            cout<<"Ihr Konstostand betraegt "<<kstd<<" Euro,"<<endl<<"Bis bald";
        }
    }
    else
    {
        cout<<"Falsches Password"<<endl;
    }

}
