/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 28/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    LL n;
    LL ca=1;
    while(cin>>n)
    {
        if (n==0)
            break;
        D a,b,c;
        cin>>a>>b>>c;
        if(n==1)
        {
            D s=(a+b)*c/2;
            D ac=(b-a)/c;
            printf("Case %lld: %.3lf %.3lf\n",ca++,s,ac);
        }
        else if(n==2)
        {
            D t=(b-a)/c;
            D s=(a+b)*t/2;
            printf("Case %lld: %.3lf %.3lf\n",ca++,s,t);

        }
        else if (n==3)
        {
            D v=sqrt(a*a+2*c*b);
            D t=((v-a)/b);
            printf("Case %lld: %.3lf %.3lf\n",ca++,v,t);
            }

            else if(n==4)
            {
                D u=sqrt(a*a-2*b*c);
                D t=((a-u)/b);
                printf("Case %lld: %.3lf %.3lf\n",ca++,u,t);

            }
    }
}
