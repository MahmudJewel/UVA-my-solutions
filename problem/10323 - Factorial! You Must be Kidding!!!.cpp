#include<bits/stdc++.h>
#define LL long long
using namespace std;
main()
{
    LL n,F;
    while(cin>>n)
    {
        if(n<0)
            n=-n;
        if(n>13)
            cout<<"Overflow!"<<endl;
        else if(n<8 && n>=0)
            cout<<"Underflow!"<<endl;
        else if(n>7 && n<14)
        {
            F=1;
            for(LL j=1; j<=n; j++)
                F*=j ;
            cout<<F<<endl;
        }
        /*else if(n<0)
        {
            n=-n;
            if(n>13 && n%2==0)
                cout<<"Overflow!"<<endl;
            else if(n<8)
                cout<<"Underflow!"<<endl;
            else if(n>7 && n<14 && n%2==0)
            {
                F=1;
                for(LL j=1; j<=n; j++)
                    F*=j ;
                cout<<F<<endl;
            }
            else
                cout<<"Underflow!"<<endl;
        }*/
    }
}
