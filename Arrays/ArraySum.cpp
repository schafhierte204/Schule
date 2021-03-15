#include <iostream>

using namespace std;

int main()
{
    int zahlen[10];
    int sum;

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

    for(int i=0;i<10;i++)
    {
        sum=sum+zahlen[i];
    }

    cout<<"Die Summe ist "<<sum<<endl;
}
