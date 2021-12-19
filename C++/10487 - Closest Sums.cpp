/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 21/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

main()
{
    LL n,mn=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        LL m,ary[n];
        for(LL i=0;i<n;i++)
            cin>>ary[i];
            cin>>m;
            cout<<"Case "<<++mn<<":"<<endl;
        while(m--)
        {
         LL result=10000000;
            LL sum,out;
            LL con;
            cin>>con;
            for(LL i=0;i<n;i++)
            {
                for(LL j=i+1;j<n;j++)
                {
                     sum=ary[i]+ary[j];
                    LL mns=con-sum;
                    if(mns<0)
                        mns=-1*mns;
                    if(result>mns)
                    {
                        result=mns;
                        out=sum;
                    }
                }
            }
            cout<<"Closest sum to "<<con<<" is "<<out<<"."<<endl;
        }

    }
}
