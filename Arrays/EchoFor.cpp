#include <iostream>

using namespace std;

int main()
{
    int zahlen[10];

    //Eingabe
    for(int i=0;i<10;i++)
    {
        cout<<"Bitte geben sie die "<<i+1<<"zahl ein"<<endl;
        while(!( cin>>zahlen[i]))
        {
            cin.clear();
            cin.ignore();
            cout<<"Bitte Geben sie eine Zahl ein"<<endl;
        }
    }

    //Ausgabe
    //-------------------------------------------------------------------------
    cout<<"Sie haben die zahlen ";
    for(int i=0;i<10;i++)
    {
        cout<<zahlen[i]<<", ";
    }
    cout<<" eingegeben."<<endl;
}
