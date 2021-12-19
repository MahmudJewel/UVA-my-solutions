/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 31/12/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double


main()
{
    LL n,b,h,w;
    //LL result = 500001;
    while(cin>>n>>b>>h>>w)
    {
        LL r=500001;
        //LL sum;

        for(LL i=0; i<h; i++)
        {
            LL week[w];
            LL bp;
            cin>>bp;
            for(LL j=0; j<w; j++)
            {
                cin>>week[j];
            }
            LL sum;
            for(LL j=0; j<w; j++)
            {
                if(week[j]>=n)
                {
                    sum=bp*n;
                    cout<<sum<<endl;
                    break;
                }
            }
            if(r>sum)
                r=sum;
        }


        if(r<=b)
            cout<<r<<endl;

        else
            cout<<"stay home"<<endl;
        }
    }
