#include<stdio.h>
int main()
{
    int a,b,i;
    for(i=1; i<=1000; i++)
    {
        scanf("%d%d",&a,&b);
        if((a+b)==0)
            break;
        else if(a==1)
            printf("Case %d: :-\\\n",i);
        else if(((b-1)/(a-1))>(b/a))
            printf("Case %d: :-)\n",i);
        else if(((b-1)/(a-1))<(b/a))
            printf("Case %d: :-(\n",i);
        else
            printf("Case %d: :-|\n",i);
    }

    return 0;
}
