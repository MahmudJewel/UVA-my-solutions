#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,i;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        if(a<=20 && b<=20 && c<=20)
            cout<<"Case "<<i<<": good"<<endl;
        else
            cout<<"Case "<<i<<": bad"<<endl;
    }
    return 0;
}
