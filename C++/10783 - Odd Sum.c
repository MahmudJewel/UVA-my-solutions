#include<stdio.h>
int main()
{
    long long n,a,b,i,j,count,k=0;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        k++;
        count=0;
        scanf("%lld%lld",&a,&b);
        for(j=a; j<=b; j++)
        {
            if(j%2==1)
                count+=j;
        }
        printf("Case %lld: %lld\n",k,count);
    }

    return 0;
}
