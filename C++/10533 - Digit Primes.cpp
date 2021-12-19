/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 27/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
#define m 999999
LL prime_array[999999];
LL digit(LL n);
void sieve(LL n);

void sieve(LL n)
{
    LL sq=sqrt(n);
    prime_array[1]=1;
    for(LL i=2; i<=sq; i++)
    {
        if(prime_array[i]==0)
        {
            for(LL j=2; j*i<=n; j++)
            {
                prime_array[i*j]=1;
            }
        }
    }
}

LL digit(LL n)
{
    LL sum=0;
    while(n)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}

main()
{
    LL t;
    sieve (m);
    scanf("%lld",&t);
    while(t--)
    {
        LL a,b;
        scanf("%lld%lld",&a,&b);
        LL sum=0;
        for(LL i=a; i<=b; i++)
        {
            if(prime_array[i]==0)
            {
                LL c=digit(i);
                if(prime_array[c]==0)
                    sum++;
            }
        }
        printf("%lld\n",sum);
    }
}
