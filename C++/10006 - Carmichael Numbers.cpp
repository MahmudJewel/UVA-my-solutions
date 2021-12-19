/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 25/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

LL mod(LL b, LL p, LL m);

LL num[65001];
void sieve(LL n)
{
    LL sq=sqrt(n);
    for(LL i=2; i<=sq; i++)
    {
        if(num[i]==0)
        {
            for(LL j=2; j*i<=n; j++)
                num[i*j]=1;
        }
    }
}

main()
{
    LL n;
    //sieve(65000);
    while(cin>>n)
    {
        if(n==0)
            break;
        sieve(n);
        cout<<num[n]<<endl;
        if(num[n]==0)
            cout<<n<<" is normal."<<endl;
        else
        {
            LL c=true;
            for(LL i=2;i<n;i++)
            {
                LL a=i-mod(i,n,n);
                if(a!=0)
                {
                    c= false;
                    break;
                }
            }
            if(c==false)
                cout<<n<<" is normal."<<endl;
            else
                cout<<"The number "<<n<<" is a Carmichael number."<<endl;
        }

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
