#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,c,t,i;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        if((a+b)>c && a+c>b && b+c>a )
        {
            if(a==b && b==c)
                cout<<"Case "<<i<<": Equilateral"<<endl;
            else if(a==b && b!=c || a==c && c!=b || b==c && c!=a)
                cout<<"Case "<<i<<": Isosceles"<<endl;
            else
                cout<<"Case "<<i<<": Scalene"<<endl;
        }
        else
            cout<<"Case "<<i<<": Invalid"<<endl;
    }
}
