/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 13/06/18              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double


main()
{
    S snum;
    while(cin>>snum)
    {
        if(snum=="0")
            break;
        LL sum=0,min=0,length;
        length=snum.size();
        //cout<<length;
        for(LL i=0; i<length; i+=2)
            sum+=snum[i]-'0';

        for(LL i=1; i<length; i+=2)
            min+=snum[i]-'0';

        sum=sum-min;
        if(sum%11==0)
            cout<<snum<<" is a multiple of 11."<<endl;
        else
            cout<<snum<<" is not a multiple of 11."<<endl;

    }
}
