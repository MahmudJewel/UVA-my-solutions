/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 28/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL gcd(LL a,LL b);

main()
{
    LL t;
    cin>>t;
    while(t--)
    {
        LL a,b;
        cin>>a>>b;
        LL g=gcd(a,b);
        LL lcm=(a*b)/g;
        //cout<<g<<" "<<lcm;
        if((a<=g && g<=b) && (lcm>=a && lcm<=b))
            cout<<g<<" "<<lcm<<endl;
        else
            cout<<"-1"<<endl;
    }
}

LL gcd(LL a,LL b)
{
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    return a;
}
