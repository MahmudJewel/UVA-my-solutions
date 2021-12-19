
/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 30/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL mod(LL a, LL b, LL c);

main()
{
    LL b,p,m;
    while(cin>>b>>p>>m)
    {
        LL result=mod(b,p,m);
        cout<<result<<endl;
    }
}

LL mod(LL b, LL p, LL m)
{
    if(p==0) return 1;

    if(p%2==0)
    {
        LL x=mod(b,p/2,m);
        return (x*x)%m;
    }
    else
        return (b%m * mod(b,p-1,m))%m;
}
