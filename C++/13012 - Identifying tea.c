#include<stdio.h>
int main()
{
    int ans[5],t,i,j,cons,a,b,c,d,e;
    while(scanf("%d%d%d%d%d%d",&t,&a,&b,&c,&d,&e) != EOF )
    {
        cons=0;
        ans[0]=a;
        ans[1]=b;
        ans[2]=c;
        ans[3]=d;
        ans[4]=e;
        //cons=0;
        for(i=0; i<5; i++)
        {
            if(t==ans[i])
                cons+=1;
        }
           printf("%d\n",ans[i]);
    }
    return 0;
}
