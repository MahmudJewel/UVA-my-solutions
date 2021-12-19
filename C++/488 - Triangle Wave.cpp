/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 30/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    LL t;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    cin>>t;
    for(LL mn=1;mn<=t;mn++){
    {
        LL a,b;
        cin>>a>>b;
        LL j,i;
        for(LL i=1;i<=b;i++)
        {
            for( j=1;j<=a;j++)
            {
                for(LL k=1;k<=j;k++)
                    cout<<j;
                cout<<endl;
            }
            for( j=a-1;j>=1;j--)
            {
                for(LL k=1;k<=j;k++)
                    cout<<j;
            if(mn==t && i==b && j==1)
                break;
                cout<<endl;

            }
            cout<<endl;
        }
        }

        //cout<<endl;
    }
}
