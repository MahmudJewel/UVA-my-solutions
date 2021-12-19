/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 22/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

struct st
{
    S name;
    LL age[3];
};

main()
{
    st str;
    LL n;
    cin>>n;
    S old,young;
    LL large=100000000;
    LL small=0;
    for(LL i=0; i<n; i++)
    {
        cin>>str.name;
        for(LL j=0; j<3; j++)
            cin>>str.age[j];
        LL sum=str.age[0]+str.age[1]*30+str.age[2]*365;
        //cout<<sum<<endl;
        if(small<sum)
        {
            young=str.name;
            small=sum;
        }
        if(large>sum)
        {
            old=str.name;
            large=sum;
        }
    }
    cout<<young<<endl<<old<<endl;
}
