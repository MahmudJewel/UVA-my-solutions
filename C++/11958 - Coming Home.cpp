/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 31/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

main()
{
    LL t;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    cin>>t;
    for(LL i=1;i<=t;i++)
    {
        LL buss,c_hrs,c_mnt,traveling_time;
        S c_str;
        LL t_hrs[10000],t_mnt[10000],t_time[10000];
        S t_str;
        cin>>buss>>c_hrs>>c_str[0]>>c_mnt;
        for(LL j=0;j<buss;j++)
        {
            cin>>t_hrs[j]>>t_str[j]>>t_mnt[j]>>t_time[j];
            //cout<<t_hrs[j]" "<<t_time[j];
        }
        LL result=100000;
        for(LL j=0;j<buss;j++)
         {
             /*LL r_hrs=t_hrs[j]-c_hrs;
             if(r_hrs<0)
                r_hrs+=24;
             LL r_mnt=t_mnt[j]-c_mnt;
             if(r_mnt<0 && r_hrs==0)
             {
                 r_hrs=24;
             }
             else if(r_mnt<0)
             {
                 r_mnt+=60;
                 r_hrs-=1;
             }
             LL time=r_hrs*60+r_mnt+t_time[j];*/
             LL time=t_hrs[j]*60+t_mnt[j]-(c_hrs*60+c_mnt);
             if(time<0)
                time+=1440;
             time=time+t_time[j];
             //cout<<time<<endl;
             if(result>time)
                result=time;
         }
         cout<<"Case "<<i<<": "<<result<<endl;
    }
}
