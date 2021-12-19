#include<stdio.h>
int main()
{
    int a,b,n,cons;
    while(scanf("%d",&n) != EOF)
    {
        cons=n;
        do
        {
            a=n/3;
            b=n%3;
            cons=cons+a;
            n=a+b;
            if(n==2)
                n=n+1;
        }
        while(n>=3);
        printf("%d\n",cons);
    }

    return 0;
}
