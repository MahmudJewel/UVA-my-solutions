/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 23/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL digit(LL n);

main()
{
    LL n,m;
    while(cin>>n && cin>>m)
    {
        LL cnt=0;
        for(LL i=n;i<=m;i++)
        {
            if(digit(i)==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}

LL digit(LL n)
{
    LL ary[10],m=0;
    while(n)
    {
        ary[m++]=n%10;
        n/=10;
    }
    for(LL i=0;i<m-1;i++)
    {
        for(LL j=i+1;j<m;j++)
        {
            if(ary[i]==ary[j])
                return 1;
        }
    }
    return 0;
}

