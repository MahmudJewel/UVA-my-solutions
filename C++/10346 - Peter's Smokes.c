#include<stdio.h>
int main()
{
    long long n,k,a,b;
    while(scanf("%lld%lld",&n,&k) != EOF )
    {
        a=n/k;
        b=n%k;
        n=n+a+(a+b)/k;
        printf("%lld\n",n);
    }
    return 0;
}
