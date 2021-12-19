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
    LL n;
    while(cin>>n)
    {
        LL ary[n],tk;
        for(LL i=0;i<n;i++)
            cin>>ary[i];
        cin>>tk;
        LL a,b,c=10000000;
        for(LL i=0;i<n-1;i++)
        {
            for(LL j=i+1;j<n;j++)
            {
                LL p=ary[i];
                LL q=ary[j];
                if(p+q==tk)
                {
                    if(p>q)
                        swap(p,q);
                        if(q-p<c)
                        {
                            a=p;
                            b=q;
                            c=q-p;
                        }
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<endl<<endl;
    }
}
