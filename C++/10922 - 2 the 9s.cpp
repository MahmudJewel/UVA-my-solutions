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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>s)
    {
        if(s=="0")
            break;
        LL sum=0;
        LL l=s.size();
        for(LL i=0; i<l; i++)
        {
            sum=sum+(s[i]-'0');
        }
        LL m=1;
        if(sum%9==0)
        {
            LL d=sum;
            while(d!=9&&d>9)
            {
                LL q=0;

                while(d!=0)
                {
                    q+=d%10;
                    d=d/10;
                }
                d=q;

                m++;
            }
            cout<<s<<" is a multiple of 9 and has 9-degree "<<m<<"."<<endl;
        }
        else
            cout<<s<<" is not a multiple of 9."<<endl;

    }
}
