                         ///Time limit.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,k,con;
    for(i=1; i<=201; i++)
    {
        scanf("%d%d",&a,&b);
        if(a==0 && b==0)
            break;
        else
        {
            con=0;
            for(j=a; j<=b; j++)
            {
                for(k=1; k<=b; k++)
                {
                    if(sqrt(j)==k)
                        con+=1;
                }
            }
        }
    }
    printf("%d\n",con);

    return 0;
}
