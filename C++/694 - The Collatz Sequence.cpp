/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 25/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string


main()
{
    LL n,l,cas=1;
    while(cin>>n>>l)
    {
        if(n<0 && l<0)
            break;
        cout<<"Case "<<cas++<<": A = "<<n<<", limit = "<<l<<", number of terms = ";
        LL term=0;
        while(l>=n)
        {
            if(n==1)
            {
                term++;
                break;
            }
            if(n%2==0)
                n/=2;
            else
                n=3*n+1;

                term++;
        }
        //if(n==1)
            //term++;
        cout<<term<<endl;
    }
}
