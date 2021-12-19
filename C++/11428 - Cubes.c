#include<stdio.h>
int main()
{
    long long n,i,j,k,x,y,c;
    for(i=1;i<=100;i++)
    {
        c=0;
        scanf("%lld",&n);
        if(n==0)
            break;
        for(j=1;j<n/3;j++)
        {
            for(k=1;k<j;k++)
            {
                if(n==(j*j*j)-(k*k*k))
                {
                    j=x;
                    k=y;
                    c=1;
                    break;
                }

            }

        }
        if(c==1)
            printf("%lld %lld\n",x,y);
        else
            printf("No solution\n");
    }


    return 0;
}
