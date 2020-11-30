#include <iostream>
using namespace std;

main()
{
    char food;
    int anzahl,anzahlf,anzahlnf;
    double sumf,sumnf;
    double preis;
    for(int i=0;i<100;i++)
    {
        cout<<"Bitte geben sie nund preis, anzahl,und food(f) oder Non-food(n) ein."<<endl;
        cin>>preis;
        cin>>anzahl;
        cin>>food;
        if(food=='f')
        {
            sumf+=preis;
            anzahlf++;
            anzahl++;
        }
        else if (food=='n')
        {
            sumnf+=preis;
            anzahlnf++;
            anzahl++;
        }
        else
        {
            cout<<"bitte geben sie f fur food und n fur non-food ein"<<endl;
        }
    }
    cout<<anzahlf<<" food items fur "<<sumf<<" zu 7\% also"<<sumf*1.07<<endl
        <<endl
        <<anzahlnf<<" non-food items fur "<<sumnf<<" zu 19\% also"<<sumnf*1.19<<endl
        <<endl
        <<"Insgesamt "<<anzahl<<" items zu "<<sumf*1.07+sumnf*1.19<<endl;

}
