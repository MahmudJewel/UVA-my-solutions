/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   dept. of CSE, MBSTU          #                                  *
*                #   Date : 28/04/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
/*main()
{
    LL n;
    while(cin>>n)
    {
        if(n==0)
            break;
        LL a=0;
        LL b=1;
        LL sum=0;
        for(LL i=1;i<=n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        cout<<sum<<endl;
    }
}*/
#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        //printf("%d\n",a^b);
        cout<<(a^b);
    }
    return 0;
}
