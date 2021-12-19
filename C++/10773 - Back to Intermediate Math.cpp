/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 17/05/17              #                                  *
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
    LL c=0;
    while(t--)
    {
        LL d,v,u;
        cin>>d>>v>>u;
        if(u==0 || v>=u || v==0)
            cout<<"Case "<<++c<<": "<<"can't determine"<<endl;
            //can't determine
        else
        {
            D own=(D)d/(D)u;
            D river=(D)d/sqrt((D)u*(D)u-(D)v*(D)v);
            printf("Case %lld: %.3lf\n",++c,river-own);
        }

    }
}
