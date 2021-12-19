/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 22/05/17              #                                  *
*****************##################################************************************************/


#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

main()
{
    LL a,c,sum=0;
    char b[100],d[100],e[100];
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    while(scanf("%lld%c%lld%c%s",&a,b,&c,d,e)==5)
    {
        //if(a==1)
           // break;
        LL m;

        if(b[0]=='+')
        {
            m=a+c;
        }
        else if(b[0]=='-')
        {
            m=a-c;
        }
        if(m==atoi(e))
            sum++;
    }
    cout<<sum<<endl;
}
