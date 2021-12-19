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
void rem(S s);

main()
{
    S s;
    while(cin>>s)
    {
        if(s=="0")
            break;
        rem(s);
    }
}

void rem(S s)
{
    LL div=0;
    for(LL i=0;i<s.size();i++)
    {
        div=s[i]-'0'+div*10;
        //cout<<div<<endl;
        div%=17;
    }
    //cout<<div<<endl;
    if(div==0)
        cout<<1<<endl;
    else
        cout<<0<<endl;
}
