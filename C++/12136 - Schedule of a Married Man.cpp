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
    LL test;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    cin>>test;
    for(LL i=1; i<=test; i++)
    {
        LL s_h,s_m,e_h,e_m;
        LL m1_h,m1_m,m2_h,m2_m;
        S s1,s2,s3,s4;
        cin>>s_h>>s1[0]>>s_m>>e_h>>s2[0]>>e_m;
        cin>>m1_h>>s3[0]>>m1_m>>m2_h>>s4[0]>>m2_m;
        LL spend_start=s_h*60+s_m;
        LL spend_last=e_h*60+e_m;
        LL m1=m1_h*60+m1_m;
        LL m2=m2_h*60+m2_m;
        if(m2<spend_start || m1>spend_last )
            cout<<"Case "<<i<<": Hits Meeting"<<endl;

        else
            cout<<"Case "<<i<<": Mrs Meeting"<<endl;

    }
}
