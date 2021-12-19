/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 31/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
#define cons 20000000
void sieve(LL n);
void t_prime();

LL ar[cons];
LL twine_prime[cons];

main()
{
    LL n;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    //sieve(cons);
    t_prime();

    while(cin>>n)
    {
        cout<<"("<<twine_prime[n]<<", "<<twine_prime[n]+2<<")"<<endl;
    }
}

void sieve(LL n)
{
    LL sq=sqrt(n);
    for(LL i=2;i<=sq;i++)
    {
        if(ar[i]==0)
        {
            for(LL j=2;i*j<=n;j++)
                ar[i*j]=1;
        }
    }
}

void t_prime()
{
    LL c=0;
    sieve(cons);
    for(LL i=2;i<=cons;i++)
    {
        if(ar[i]==0 && ar[i+2]==0)
            twine_prime[++c]=i;
    }
}
