/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 19/12/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double
void ans(LL m);
LL b=10;

main()
{
    LL n;
    while(cin>>n){
    ans(n);
    }
}

void ans(LL m)
{
    LL f=m/b;
    LL re=m%b;
    LL x=f+re;
    if(x*x==m)
    {
        cout<<m<<endl;
    }
}
