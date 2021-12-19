/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 28/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL ternary(LL n);

main()
{
    LL n;
    while(cin>>n)
    {
        if(n<0)
            break;
        LL result=ternary(n);
        cout<<result<<endl;
    }
}

LL ternary(LL n)
{
    LL d=1,result=0,rem;
    while(n)
    {
        rem=n%3;
        n/=3;
        result=result+rem*d;
        d*=10;
    }
    return result;

}

