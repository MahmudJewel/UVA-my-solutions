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
    LL t;
    cin>>t;
    for(LL i=1; i<=t; i++)
    {
        LL n;
        cin>>n;
        char ch[n+5];
        for(LL j=0; j<n; j++)
            cin>>ch[j];
        LL cnt=0;
        for(LL j=0; j<n;)
        {
            if(ch[j]=='#')
                j++;
            else
            {
                cnt++;
                j+=3;
            }
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }
}
