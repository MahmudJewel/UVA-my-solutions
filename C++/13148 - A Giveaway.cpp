/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 27/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL qubic(LL n);


main()
{
    LL n;
    while(cin>>n)
    {

        if(n==0)
            break;
            LL sq=sqrt(n);
            LL q=qubic(n);
            //cout<<sq*sq<<" "<<q<<endl;
            if(sq*sq==n && q==n)
                cout<<"Special"<<endl;
            else
                cout<<"Ordinary"<<endl;

    }
}

LL qubic(LL n)
{
    D a=1.0/3.0;
    //cout<<a<<endl;
    LL r=pow(n,a);
    if(r!=1)
    r++;
    //cout<<r<<endl;
    //cout<<r*r*r<<endl;
    LL p=r*r*r;
    return p;
}


