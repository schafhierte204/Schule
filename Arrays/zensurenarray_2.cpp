#include <iostream>

using namespace std;

int main()
{
    int zenz[14]={0};
    int sum =0;
    int max =0;
    int min =99999;

    for(int i=0;i<14;i++)
    {
        cout<<"Bitte geben sie die "<<i+1<<" te Zahle ein."<<endl;
        cin>>zenz[i];
    }
    for(int i=0;i<14;i++)
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
    cout<<"Ihre 14 Noten Lauten: ";
    for (int i=0;i<14;i++)
    {
        cout<<zenz[i]<<", ";
    }
    cout<<endl;
    cout<<"Ihr Durchschnitt ist "<<sum/14<<endl;
    cout<<"Ihre Beste Note ist "<<min<<endl;
    cout<<"Ihre Schlechteste Note ist "<<max<<endl;
    
}
