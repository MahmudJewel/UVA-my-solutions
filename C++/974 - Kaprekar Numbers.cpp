/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 23/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define D double
#define S string
LL kaprekar_num (LL i);

main()
{
    LL t;
    cin>>t;
    for(LL ij=1; ij<=t; ij++)
    {
        LL a,b;
        cin>>a>>b;
        LL d=0;
        cout<<"case #"<<ij<<endl;
        for(LL i=a; i<=b; i++)
        {
            LL c=kaprekar_num(i);
            if(c!=0){
                cout<<c<<endl;
                d++;
            }
        }
        if(d==0)
            cout<<"no kaprekar numbers"<<endl;
        if(ij!=t)
            cout<<endl;

    }
    //cout<<endl;

}

LL kaprekar_num(LL i)
{
    LL b,c,d;

    c=i;
    b=i*i;
    LL e=b;
    d=10;
    while(b)
    {
        LL m=e%d;
        LL n=e/d;
        if(m>0 && n>0 && m+n==c)
        {
            return c;
        }
        d*=10;
        b/=10;
    }
    return 0;
}
