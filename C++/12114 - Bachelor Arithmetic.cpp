#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    for(i=1;i<=1000;i++)
    {
        cin>>a>>b;
        if((a+b)==0)
            break;
         else if(a==1)
            cout<<"Case "<<i<<": :-\\"<<endl;
         else if(b<a)
            cout<<"Case "<<i<<": :-("<<endl;
         else
            cout<<"Case "<<i<<": :-|"<<endl;
    }

    return 0;
}
