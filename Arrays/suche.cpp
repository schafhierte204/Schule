#include <iostream>

using namespace std;

int main()
{
    int array[] = {2,4,7,8,3,7,9,24};
    int zahl;
    int pos;
    bool found = false;

    cout<<"Bitte geben sie eine Suchzahl ein "<<endl;
    while(!(cin>>zahl))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte Geben sie eine ganzzahl ein."<<endl;
    }

    for(int i=0;i<8;i++)
    {
        if(array[i]==zahl)
        {
            pos=i+1;
            found=true;
            i=8;
        }
    }
    if(found)
    {
        cout<<"Die Zahl wurde an stelle "<<pos<<" gefunden"<<endl;
    }
    else
    {
        cout<<"Die Zahl Wurde Nicht Gefunden"<<endl;
    }
}
