#include <iostream>
using namespace std;

int main()
{
    int preistag1 = 50;
    int preiskm1 = 5;
    int preistag2 = 60;
    int preiskm2 = 3;
    int preistag3 = 100;
    int preiskm3 = 10;
    int preistag4 = 10;
    int preiskm4 = 20;
    int preistag5 = 10;
    int preiskm5 = 5;
    int kmalt,kmneu,tage,km;
    int preistag,preiskm;
    int wahl;
    cout<<"Bitte wählen sie ein auto aus"<<endl;
    cout<<"1. Ford mustang "<<preistag1<<"/tag "<<preiskm1<<"/km"<<endl;
    cout<<"2. Tesla model 3"<<preistag2<<"/tag "<<preiskm2<<"/km"<<endl;
    cout<<"3. Tesla model Y"<<preistag3<<"/tag "<<preiskm3<<"/km"<<endl;
    cout<<"4. Ford mustang "<<preistag4<<"/tag "<<preiskm4<<"/km"<<endl;
    cout<<"5. Isetta "<<preistag5<<"/tag "<<preiskm5<<"/km"<<endl;
    cin>>wahl;
    if (wahl<0||wahl>5)
    {
        cout<<"Bitte wählen sie ein Auto aus";
        return 1;
    }
    if (wahl==1)
    {
        preiskm=preiskm1;
        preistag=preistag1;
    }
    else if (wahl==2)
    {
        preiskm=preiskm2;
        preistag=preistag2;
    }
    else if (wahl==3)
    {
        preiskm=preiskm3;
        preistag=preistag3;
    }
    else if (wahl==4)
    {
        preiskm=preiskm4;
        preistag=preistag4;
    }
    else if (wahl==5)
    {
        preiskm=preiskm5;
        preistag=preistag5;
    }

    cout<<"Bitte Geben sie den alten und neuen Kilometer stand ein";
    cin>>kmalt;
    cin>>kmneu;
    if(kmalt>kmneu)
    {
        cout<<"bitte kontrollieren sie die Kilometerstände";
        return 1;
    }
    km=kmneu-kmalt;
    cout<<"Sie sind "<<km<<" kilometer Gefahren das macht "<<km*preiskm<<" Euro"<<endl;
    cout<<"bitte geben sie an wiefiele tage sie den wagen entliehen haben :";
    cin>>tage;
    cout<<"Sie muessen fuer "<<tage<<" tage "<<tage*preistag<<" Euro bezahlen"<<endl;
    cout<<"Insgesamt macht das "<<km*preiskm+tage*preistag<<" Euro."<<endl;



}


