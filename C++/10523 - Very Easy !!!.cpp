/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 29/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string


main()
{
    LL n,a;
    while(cin>>n>>a)
    {
        LL sum=0;
        for(LL i=1;i<=n;i++)
        {
            sum=sum+i*pow(a,i);
        }
        cout<<sum<<endl;
    }
}
