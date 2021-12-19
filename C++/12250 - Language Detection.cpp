#include<bits/stdc++.h>
using namespace std;
main()
{
    string name;
    int i=0;
    while(getline(cin,name))
    {
        i++;
        if(name=="#")
            break;
        if(name=="HELLO")
            cout<<"Case "<<i<<": ENGLISH"<<endl;
           else if(name=="HOLA")
            cout<<"Case "<<i<<": SPANISH"<<endl;
            else if(name=="HALLO")
            cout<<"Case "<<i<<": GERMAN"<<endl;
            else if(name=="BONJOUR")
            cout<<"Case "<<i<<": FRENCH"<<endl;
            else if(name=="CIAO")
            cout<<"Case "<<i<<": ITALIAN"<<endl;
            else if(name=="ZDRAVSTVUJTE")
            cout<<"Case "<<i<<": RUSSIAN"<<endl;
            else
            cout<<"Case "<<i<<": UNKNOWN"<<endl;

    }
}
