/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 19/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL gcd(LL a,LL b);
main()
{
    LL n;
    // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>n)
    {
        if(n==0)
            break;
        LL r,g=0;
        for(LL i=1; i<n; i++)
        {
            for(LL j=i+1; j<=n; j++)
            {
                r=gcd(i,j);
                g+=r;
            }
        }
        cout<<g<<endl;
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
