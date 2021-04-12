#include <iostream>

using namespace std;

int main()
{
    int zenz[99]={0};
    int anz;
    int sum =0;
    int max =0;
    int min =99999;
    bool fehler = false;
    cout<<"Wieviele Noten Wollen sie Eingeben"<<endl;
    do
    {
        fehler=false;
        cin>>anz;
        if(anz>99)
        {
            cout<<"Dieses Programm Kann nur bis zu 99 Noten Verarbeiten"<<endl;
            fehler=true;
        }
    }
    while (fehler);

    for(int i=0;i<anz;i++)
    {
        cout<<"Bitte geben sie die "<<i+1<<" te Zahle ein."<<endl;
        cin>>zenz[i];
    }
    for(int i=0;i<anz;i++)
    {
        sum=sum+zenz[i];
        if (zenz[i]<min)
        {
            min=zenz[i];
        }
        if (zenz[i]>max)
        {
            max=zenz[i];
        }
    }
    cout<<"Ihre "<<anz<<" Noten Lauten: ";
    for (int i=0;i<anz;i++)
    {
        cout<<zenz[i]<<", ";
    }
    cout<<endl;
    cout<<"Ihr Durchschnitt ist "<<sum/anz<<endl;
    cout<<"Ihre Beste Note ist "<<min<<endl;
    cout<<"Ihre Schlechteste Note ist "<<max<<endl;

}
