/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 26/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
#define PI acos(-1)


main()
{
    LL n;
    while(cin>>n)
    {
        if(n<0)
            break;
        /* if(n==1)
             cout<<"0%"<<endl;
         else
         {
             D total_sell=4*PI+(D)n*PI;   ///sphear= 4 pi r*r. r=1;
             D profit=total_sell-4*PI;
             profit=profit*100/(4*PI);
             cout<<(LL)profit<<"%"<<endl;
         }*/

        if(n==1)
            cout<<0<<"%"<<endl;
        else
        {
            cout<<n*25<<"%"<<endl;
        }
    }
}
