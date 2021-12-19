#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==b && b!=c)
            cout<<"C"<<endl;
        else if(a==c && c!=b)
            cout<<"B"<<endl;
        else if(c==b && b!=a)
            cout<<"A"<<endl;
        else
            cout<<"*"<<endl;
    }
}
