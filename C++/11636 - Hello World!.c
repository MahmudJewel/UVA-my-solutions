#include<stdio.h>
int main()
{
    int n,i,j,k=0,count;
    while(scanf("%d",&n)>0)
    {
        count=0;
        i=1;
        j=0;
        while(1)
        {
            i=2*i;
            j++;
            count+=i;
            if(count>=n)
            {

            }


        }
        k++;
        printf("Case %d: %d\n",k,j);
    }

    return 0;
}
