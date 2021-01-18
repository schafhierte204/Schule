# include <iostream>
using namespace std;

int main()
{
    char wahl;
    double anzNoten; // durchschitt
    double summe;
    int funfer;
    int sechser;
    int note;
    do
    {
        summe = 0;
        funfer = 0;
        sechser = 0;
        cout << "Wie viele Noten Wollen sie eingeben"<<endl;
        cin >> anzNoten;
        for(int i=0;i<anzNoten;i++)
        {
            cout << "Geben sie die "<<i+1<<"te Note ein"<<endl;
            cin >> note;
            summe=summe+note;
            if(note==5)
            {
                funfer++;
            }
            else if(note==6)
            {
                sechser++;
            }
        }
        cout << "bitte Wahlen sie ob es ein Halbjahres(H/h) oder ein Ganzjahres(J/j) Zeugnis ist"<<endl;
        cin >> wahl;
        switch (wahl)
        {
            case 'H':
            case 'h':
                cout <<"Der Durchschitt ist :"<<summe/anzNoten<<endl;
                break;
            case 'J':
            case 'j':
                cout<<"Der Schueler hat "<<funfer<<" 5en und "<<sechser<<" 6en"<<endl;
                if(sechser>0||funfer>2)
                {
                    cout <<"Der Schueler wird nicht Versetzt"<<endl;
                }
                else if(funfer==2)
                {
                    cout <<"Der Schueler darf eine Nachpruefung machen"<<endl;
                }
                else
                {
                    cout <<"Der Schueler wird versetzt"<<endl;
                }
                break;
            default:
                cout <<"Bitte geben sie H/h oder J/j ein" <<endl;
        }
        cout <<" Wollen sie einen weiteren Schueler eingeben?(J/N)"<<endl;
        cin >> wahl;
    }
    while (wahl=='J'||wahl=='j');
}
