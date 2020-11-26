#include <iostream>
#include <cmath>
using namespace std;
main()
{
    double a,b,c,d,x1;
    cout<<"eingabe beginnen"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>x1;
    cout<<"input ende"<<endl;

    double p = (b-x1)/a;
    cout<<p;
    double q = (c-x1*b-x1*x1*a)/a;
    cout<<q;

}
