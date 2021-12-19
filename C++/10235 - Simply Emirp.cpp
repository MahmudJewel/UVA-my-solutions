/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 08/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
//LL even(LL a);
void prime(LL a);
LL prim[1000000];
main()
{
    LL n;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    prime(1000000);
    while(cin>>n)
    {
        LL m=n;
        LL c=0;
        //LL con=10;
        while(m)
        {
         LL mod=m%10;
         c=c*10+mod;
         //con=10;
         m/=10;
        }
        if(prim[n]==1)
            cout<<n<<" is not prime."<<endl;
        else if (prim[c]==0 && n!=c)
            cout<<n<<" is emirp."<<endl;
            else //if(prim[n]==0 && prim[c]==1)
            cout<<n<<" is prime."<<endl;

    }
}

void prime(LL a)
{
    LL c=sqrt(a);
    for(LL i=2;i<=c;i++)
    {
       for(LL j=2;i*j<=a;j++)
       {
           if(prim[i*j]==0)
            prim[i*j]=1;
       }
    }
}
