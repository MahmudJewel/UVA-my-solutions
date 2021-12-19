/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 21/07/17              #                                  *
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
        LL n;
        cin>>n;
        LL ary[n];
        for(LL i=0;i<n;i++)
            cin>>ary[i];
        LL sum=0;
        for(LL i=1;i<n;i++)
        {
            LL con=0;
            for(LL j=i-1;j>=0;j--)
            {
                if(ary[i]>=ary[j])
                    con++;
            }
            sum+=con;

        }
        cout<<sum<<endl;
    }

}
