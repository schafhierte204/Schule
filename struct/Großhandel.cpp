#include <iostream>
using namespace std;

int main(){
    char z_art;
    double netto;
    double brutto;
    double skonto=3;
    double mwst=19;

    cout<<"Willkommen an der Kasse!"<<endl;
    cout<<"Wie hoch ist ihr Netto Warenwert?"<<endl;
    cin>>netto;
    cout<<"Zahlen sie bar (B),mit Karte (K) oder auf Rechnung (R) ?"<<endl;
    cin>>z_art;
    if (netto>=200 and z_art=='B'|| z_art=='K'){
        netto=netto-netto*skonto/100;
        brutto=netto+netto*mwst/100;//doppelt?
    }
    else
    {
        brutto=netto+netto*mwst/100;
    }
    cout<<"Ihr Brutto-Zahlungsbetrag betraegt.."<<brutto<<". Auf Wiedersehen !"<<endl;    
}
