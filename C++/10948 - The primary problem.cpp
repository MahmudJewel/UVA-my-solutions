/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 19/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL a[1000000];
void prime(LL n);

void prime(LL n)
{
    LL sq=sqrt(n);
    for(LL i=2; i<=sq; i++)
    {
        if(a[i]==0)
        {
            for(LL j=2; i*j<=n; j++)
            {
                a[i*j]=1;
            }
        }
    }
}

main()
{
    LL n;
    while(cin>>n)
    {
        LL c=0;
        if(n==0)
            break;
        LL m=n/2;
        prime(n);
        for(LL i=2; i<=m; i++)
        {
            if(a[i]==0 && a[n-i]==0)
            {
                cout<<n<<":"<<endl<<i<<"+"<<n-i<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
            cout<<n<<":"<<endl<<"NO WAY!"<<endl;
    }
}
