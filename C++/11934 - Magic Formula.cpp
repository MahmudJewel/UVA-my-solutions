/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 24/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string


main()
{
    LL a,b,c,d,l;
    while(cin>>a>>b>>c>>d>>l)
    {
        if(a+b+c+d+l==0)
            break;
            LL cnt=0;
            for(LL i=0;i<=l;i++)
            {
                LL f_x=a*i*i+b*i+c;
                if(f_x%d==0)
                    cnt++;
            }
            cout<<cnt<<endl;

    }
}

