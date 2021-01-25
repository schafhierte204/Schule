#include <iostream>
using namespace std;

int main()
{
    int stockwerk;
    cout<<"Bitte geben sie Die Etage an auf die Sie fahren möchten(0-6)"<<endl;
    cin>>stockwerk;
    switch(stockwerk)
    {
        case 0:
            cout<<"Hier finden sie den Keller und die Tiefgarage";
            break;
        case 1:
            cout<<"Hier finden sie Schreibwaren,die Parfuemerie und Lederwaren";
            break;
        case 2:
            cout<<"Hier finden sie Mode für Kinder und Jugendliche";
        case 3:
        case 4:
            cout<<"Hier finden sie Damen- und Herrenbekleidung";
            break;
        case 5:
        case 6:
            cout<<"Hier finden sie Haushaltswahren, Geschenkartikel und Heimtextilien";
            break;
    }
}
