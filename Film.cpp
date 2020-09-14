#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int film,personen,p_person;
    int p_film1 = 15;
    int p_film2 = 20;
    int p_film3 = 25;

    cout<<"Heute Lauft :"<<endl
        <<"Saal 1 : Peppa Pig        "<<p_film1<<" Euro"<<endl
        <<"Saal 2 : Konig der Loewen "<<p_film2<<" Euro"<<endl
        <<"Saal 3 : Tenet            "<<p_film3<<" Euro"<<endl
        <<"Bitte wahlen sie einen Film aus :";
    cin>>film;
    if(film==1)
    {
        p_person = p_film1;
    }
        else if(film==2)
        {
            p_person = p_film2;
        } 
            else if(film==3)
            {
                p_person = p_film3;
            } 
                else
                {
                    cout<<"Bitte Geben sie einen unserer filme an";
                    p_person = 0;
                }
    cout<<"Wie viele Personen sind sie :";
    cin>>personen;
    cout<<"Sie muessen "<<p_person*personen<<" Euro zahlen";
}
