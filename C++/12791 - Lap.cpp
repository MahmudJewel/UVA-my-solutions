/***************#####################***************************************************************************************
*                #   Editor : Jewel Mahmud        #
*                #   dept. of CSE, MBSTU          #
*                #   Date : 28/04/17              #
****************######################**************************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
main()
{
    LL a,b;
    while(cin>>a>>b)
    {
       LL c=1,sum1=a,sum2=b;
       LL k;
       while(1)
       { k=sum2-sum1;
           if(k>=b)
            break;
           sum1+=a;
           sum2+=b;
           c++;
       }
       cout<<c<<endl;
    }
}

