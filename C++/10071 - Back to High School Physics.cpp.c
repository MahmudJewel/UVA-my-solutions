#include<stdio.h>
int main()
{
    int v,t;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    while(scanf("%d%d",&v,&t)!=EOF)
    {

        printf("%d\n",v*t*2);
    }

    return 0;
}
