/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 25/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    S s;
    while(cin>>s)
    {
        if(s=="0")
            break;
        LL sum=0,l;
        l=s.size();
        for(LL i=0;i<l;i++)
        {
            LL c=l-1-i;
            LL d=i+1;
            LL digit=s[c]-'0';
            sum=sum+(digit*(pow(2,d)-1));
        }
        cout<<sum<<endl;
    }
}
