/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 23/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

main()
{
    LL a,b;
    while(cin>>a>>b)
    {
        LL ary[a];
        for(LL i=0; i<a; i++)
        {
            cin>>ary[i];
        }
        for(LL i=0; i<b; i++)
        {
            LL m,n;
            cin>>m>>n;
            LL cnt=0;
            LL mn=0;
            for(LL j=0; j<a; j++)
            {
                if(ary[j]==n)
                {
                    cnt++;
                    if(cnt==m)
                    {
                        cout<<j+1<<endl;
                        mn++;
                        break;
                    }
                }
            }
            if(!mn)
                cout<<0<<endl;
        }
    }
}
