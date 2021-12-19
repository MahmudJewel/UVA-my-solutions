#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        printf("%d\n",c*(a+a-b)/(a+b));

    }
    return 0;
}
