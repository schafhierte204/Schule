#include <iostream>
using namespace std;

int main()
{
    char zahl;
    do
    {
        cout<<"Bitte Geben sie eine Zahl ein."<<endl;
        cin >>zahl;
        if(zahl!='1')
        {
            cout<<"Das war eine "<<zahl<<" Versuchen Sie es noch Einmal!"<<endl;
        }
    }
    while(zahl!='1');
    cout <<"Danke, dass sie eine 1 eingegeben haben";
    
}
