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
LL prim[32768];
main()
{
    LL n;
    prime(32768);
    while(cin>>n)
    {
        if(n==0)
        break;
        LL c=0;
        if(prim[2]==0 & prim[n-2]==0)
            c++;
        for(LL i=3;i<=n/2;i=i+2)
        {
            //LL a=even(i);
            //LL p=prime(i);
            if(prim[i]==0)
            {
                LL b=n-i;
                //LL c=even(b);
                //LL q=prime(b);
                if(prim[b]==0){
                    c++;
                    }
            }
        }
        cout<<c<<endl;
    }
}
/*LL even(LL a)
{
    if(a%2==1)
        return 1;
    else
        return 0;
}*/
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
