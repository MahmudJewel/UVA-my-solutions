/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 31/12/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double


main()
{
    LL t;
    cin>>t;
    while(t--)
    {
        LL a,b,c;
        cin>>a>>b>>c;
        a=a+b;
        LL sum=0;
        while(a>=c)
        {
             LL s=a/c;
             sum+=s;
            a=a%c;
            a=s+a;
        }
        cout<<sum<<endl;

    }
}
