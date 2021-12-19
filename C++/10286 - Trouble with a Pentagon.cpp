/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 26/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
#define PI acos(-1)

main()
{
    D a;
    while(cin>>a)
    {
        D b=sin(PI*108/180);
        D c=sin(PI*63/180);
        D result=a*b/c;
        printf("%.10lf\n",result);
    }
}
