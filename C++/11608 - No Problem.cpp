/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 22/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

 main()
{
    LL n,m=0;
    while(cin>>n)
    {
        if(n<0)
            break;

        LL a[12],b[12];
        for(LL i=0;i<12;i++)
            cin>>a[i];
        for(LL i=0;i<12;i++)
            cin>>b[i];
            cout<<"Case "<<++m<<":"<<endl;
            for(LL i=0;i<12;i++)
            {
                if(n>=b[i]){
                    cout<<"No problem! :D"<<endl;
                 n-=b[i];
                }
                else
                    cout<<"No problem. :("<<endl;

                n+=a[i];
            }
    }
}

