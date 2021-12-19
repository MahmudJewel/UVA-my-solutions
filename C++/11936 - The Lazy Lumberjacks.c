#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)>c && (b+c)>a &&(a+c)>b)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
