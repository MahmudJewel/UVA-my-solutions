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
        LL rating[10];
        S name[10];
        for(LL j=0;j<10;j++)
        {
            cin>>name[j]>>rating[j];
        }
        LL mx=0;
        for(LL j=0;j<10;j++)
        {
            if(mx<rating[j])
                mx=rating[j];
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(LL j=0;j<10;j++)
        {
            if(mx==rating[j])
                cout<<name[j]<<endl;
        }
    }
}
