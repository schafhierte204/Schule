#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,erg;
    char wahl;
    cout<<"Welchen funktionstypen wollen sie"<<endl;
    cout<<"L fur lineare funktion"<<endl<<"Q fur quadratische funktionen"<<endl
        <<"3 fur 3. Grad"<<endl;
    cin>>wahl;
    if(wahl=='l'||wahl=='L')
    {
        int m;
        int b;
        cout<<"bitte geben sie m und b in der formel mx+b an"<<endl;
        cin>>m;
        cin>>b;
        cout<<"# yAchsenabschitt=b="<<b<<endl;
        cout<<" Sy(0|"<<b<<")"<<endl<<endl;
        cout<<"# xAchsenabschitt"<<endl;
        cout<<"f(x)=0"<<endl;
        cout<<m<<"x+"<<b<<"=0 |-("<<b<<")"<<endl;
        cout<<m<<"x"<<"="<<-b<<" |:"<<m<<endl;
        cout<<"x="<<-b/m<<endl;
        cout<<" Sx("<<-b/m<<"|0)"<<endl;

    }
    else if (wahl=='q'||wahl=='Q')
    {
        cout<<"bitte gebn sie die form ser funktion an:"<<endl;
        cout<<"S = Scheitelpunktform"<<endl<<"N = Normalform"<<endl<<"U = Nullstellenform"<<endl;
        cin>>wahl;
        if(wahl == 'S'||wahl == 's')
        {
            double a,sx,sy,sqr;
            cout<<"sie haben die Scheitelpunktform ausgewählt bitte geben sie a,Sx,Sy an"<<endl;
            cin>>a;
            cin>>sx;
            cin>>sy;
            cout<<"# Y-Achse"<<endl;
            cout<<"f(0)"<<endl;
            cout<<"a(x-Sx)²+Sy"<<endl;
            cout<<a<<"(0-"<<sx<<")²+"<<sy<<endl;
            sqr=pow((0-sx),2);
            cout<<a<<"*"<<sqr<<"+"<<sy<<endl;
            cout<<a*sqr+sy<<endl;
            if((a>0&&sy>0)||(a<0&&sy<0))
            {
                cout<<"Es gibt keine nullstelle"<<endl;
            }
            else
            {

                cout<<"# X-Achse"<<endl;
                cout<<"f(x)=0"<<endl;
                cout<<"a(x-Sx)²+Sy=0"<<endl;
                cout<<a<<"(x-"<<sx<<")²+"<<sy<<"=0  |-("<<sy<<")"<<endl;
                cout<<"(x-"<<sx<<")²="<<-sy/a<<"  |√"<<endl;
                sqr=sqrt(-sy/a);
                cout<<"x-"<<sx<<"=±"<<sqr<<"  |+"<<sx<<endl;
                cout<<"x1/x2="<<sx<<"±"<<sqr<<endl;
                cout<<"x1="<<sx+sqr<<endl;
                cout<<"x2="<<sx-sqr<<endl;
            } 
        }
        else if(wahl== 'N'||wahl=='n')
        {
            double a,p,q,rt;
            cout<<"Sie haben die normalform(ax^2+px+q) ausgewählt bitte geben sie a,p,q an"<<endl;
            cin>>a;
            cin>>p;
            cin>>q;
            cout<<"# Y-Achse"<<endl;
            cout<<"f(0)"<<endl;
            cout<<"f(0)="<<q<<endl;
            if(pow(p/2,2)-q<0)
            {
                cout<<"Es gibt keine Nullstelle"<<endl;
            }
            else
            {
                cout<<"# X-Achse"<<endl;
                cout<<"f(x)=0"<<endl;
                cout<<a<<"x²+"<<p<<"x+"<<q<<"=0  |/a"<<endl;
                cout<<"x²+"<<p/a<<"x+"<<q/a<<"=0"<<endl;
                cout<<"x1/2=p/2±√(p/2)²-q'"<<endl;
                cout<<"x1/2="<<p<<"/2K±√("<<p<<"/2)²-"<<q<<"'"<<endl;
                cout<<"x1/2="<<p/2<<"±√"<<p/2<<"²-"<<q<<"'"<<endl;
                cout<<"x1/2="<<p/2<<"±√"<<pow(p/2,2)-q<<"'"<<endl;
                rt=sqrt(pow(p/2,2)-q);
                cout<<"x1="<<p/2+rt<<endl;
                cout<<"x2="<<p/2-rt<<endl;
            }
        }
        else
        {
            cout<<"Diese Form kenne ich nicht";
        }
    }
    else if (wahl=='3')
    {
        bool pos;
        double a,b,c,d;
        double s=10;
        cout<<"bitte geben sie a b c und d ein"<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        x=0;
        erg=a*pow(x,3)+b*pow(x,2)+c*x+d;
        cout<<erg<<endl;
        while(erg!=0&&s>0.001)
        {
            cout<<erg<<endl;
            if(erg>0)
            {
                x=x-s;
                if(!pos)
                {
                    s=s/2;
                }
                pos=true;
            }
            else
            {
                x=x+s;
                if(pos)
                {
                    s=s/2;
                }
                pos=false;
            }
            erg=a*pow(x,3)+b*pow(x,2)+c*x+d;
        }
        cout<<x;
    }
    else
    {
        cout<<"andere funktionen kann ich nicht";
    }
}
