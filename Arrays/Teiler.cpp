#include <iostream>

using namespace std;

int main()
{
    int teiler[9];
    int zahl;
    int j=0;

    cout<<"Bitte geben Sie die Zahl ein."<<endl;
    while(! (cin>>zahl))
    {
        cin.clear();
        cin.ignore();
        cout<<"Bitte geben sie eine Zahl ein."<<endl;
    }

    for(int i=1;i<10;i++)
    {
        if((zahl%i)==0)
        {
            teiler[j]=i;
            j++;
        }
    }
    cout<<"Die Teiler sind ";
    for(int i=0;i<9;i++)
    {
        if(teiler[i]==0) break;
        cout<<teiler[i]<<", ";
    }
}
