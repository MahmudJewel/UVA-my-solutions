#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL t;
    cin>>t;
    for(LL i=1;i<=t;i++)
    {
        LL h,m;
        string s;
        cin>>h>>s[0]>>m;
        LL total=h*60+m;
        if(total>720)
            total=total-720;
        total=720-total;
        //cout<<total;
        LL h1=total/60;
        LL m1=total-h1*60;
        if(h1==0)
            h1=12;
        if(h1<10)
        cout<<0<<h1;
        else
            cout<<h1;
        if(m1<10)
            cout<<":"<<0<<m1<<endl;
        else
            cout<<":"<<m1<<endl;
    }
}
