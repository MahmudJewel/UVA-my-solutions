/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   dept. of CSE, MBSTU          #                                  *
*                #   Date : 07/05/17              #                                  *
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
        if(n==0)
            break;
           LL sum=0;
        for(LL i=0;i<n;i++)
        {
            LL a,b,c;
            cin>>a>>b>>c;
            sum+=(a*c);
        }
        cout<<sum<<endl;
    }
}
