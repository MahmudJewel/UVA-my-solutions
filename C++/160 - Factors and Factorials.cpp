/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 23/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL prime_array[1000];
LL prime_number[100];
void prime(LL n)
{
    LL sq=sqrt(n);
    //prime_array[1]=1;
    for(LL i=2; i<=sq; i++)
    {
        if(prime_array[i]==0)
        {
            for(LL j=2; j*i<=n; j++)
            {
                prime_array[i*j]=1;
            }
            //cout<<i<<" ";
        }
    }
}
//struct num

main()
{
    prime(100);
    LL n;
    while(cin>>n)
    {
        if(n==0)
            break;
        LL c=0;
        LL con[101];
        memset(con,0,sizeof(con));
        for(LL i=0; i<100; i++)
        {
            if(prime_array[i]==0)
            {
                //cout<<i<<" ";
                prime_number[c++]=i;
            }
        }
        for(LL i=2; i<=n; i++)
        {
            for(LL j=2; j<=i; j++)
            {
                LL m=i;
                while(m)
                {
                    if(m%prime_number[j]==0)
                    {
                        con[j]++;
                        m=m/j;
                    }
                    else
                        m=0;
                }
            }
        }
        for(LL i=0; i<n; i++)
        {
            if(con[i]!=0)
                cout<<con[i]<<" ";
        }
        cout<<endl;
    }
}
