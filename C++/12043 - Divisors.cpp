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


main()
{
    LL t;
    cin>>t;
    while(t--)
    {
        LL a,b,c;
        cin>>a>>b>>c;
        LL divisor=0,sum=0;
        //a=c;

        for(LL i=a;i<=b;i=i)
        {
           // LL m=i;
            if(i%c==0)
            {
                for(LL j=1;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        divisor++;
                        sum+=j;
                    }
                }
                divisor++;
                sum+=i;
                i=i+c;
            }
            else
                i++;
        }
        cout<<divisor<<" "<<sum<<endl;

    }
}
