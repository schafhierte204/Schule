#include <iostream>
using namespace std;

int main()
{
    int reihen;
    int i=0;
    cout<<"Wie viele reihen sollen ausgegeben werden"<<endl;
    cin>>reihen;
    do
    {
        i++;
        cout<<i<<". Reihe, *****"<<endl;
    }
    while (i<reihen);
}
