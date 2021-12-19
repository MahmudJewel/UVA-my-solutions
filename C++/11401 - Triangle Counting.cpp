/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 14/06/18              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double

void tri(LL a,LL b,LL c);
void fnl();

LL ans[1000000];
LL cnt=0;

void tri(LL a,LL b,LL c)
{
    if(a<c & b<c)
        swap(a,c);
    else if(a<b & c<b)
        swap(a,b);

    if(a<(b+c))
        cnt++;
}

void fnl()
{
    LL t=100;
    for(LL l=4;l<t;l++)
    {
         for(LL i=1; i<l; i++)
        {
            for(LL j=i+1; j<l; j++)
            {
                for(LL k=1+j; k<l; k++)
                {
                    //if(k==i || k==j)
                       // continue;

                        tri(i,j,k);
                }

            }
        }
        ans[l]=cnt;
        cnt=0;
    }
}


main()
{
    LL t;
    fnl();
    cout<<"h"<<endl;
    while(cin>>t)
    {

        if(t<3)
            break;
       cout<<ans[t]<<endl;

    }
}
