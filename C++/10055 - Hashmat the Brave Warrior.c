#include<stdio.h>
int main()
{
    long long a,b,n;
    while(scanf("%lld%lld",&a,&b)!= EOF)
    {
        n=a-b;

        (a-b)>0 ? printf("%lld\n",(a-b)) : printf("%lld\n",-(a-b));
        ///n>0 ? printf("%lld\n",n) : printf("%lld\n",-n);
    }

    return 0;
}
