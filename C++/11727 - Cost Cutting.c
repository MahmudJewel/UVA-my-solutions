#include<stdio.h>
int main()
{
    int n,a,b,c,i,k=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        k++;
        scanf("%d%d%d",&a,&b,&c);
        if((a>b && b>c) || (c>b && b>a))
            printf("Case %d: %d\n",k,b);
        else if((a>c && c>b) || (b>c && c>a))
            printf("Case %d: %d\n",k,c);
        else
            printf("Case %d: %d\n",k,a);

    }
    return 0;
}
