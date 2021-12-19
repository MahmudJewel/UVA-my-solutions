#include<stdio.h>
int main()
{
    long long n,a,b,c,i;
    float d,e;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        d=(float)c/(float)(a+b);
        e=(float)a*d+(float)(a-b)*d;
            printf("%lld\n",(long long int)e);
    }
    return 0;
}
