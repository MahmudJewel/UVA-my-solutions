#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[100000];
    int l,c=0;
    while(gets(a))
    {
        c++;
        l=strlen(a);
        if(l==1)
            break;
        else if(l==4)
            cout<<"Case "<<c<<": Hajj-e-Akbar"<<endl;
        else
            cout<<"Case "<<c<<": Hajj-e-Asghar"<<endl;
    }
}
