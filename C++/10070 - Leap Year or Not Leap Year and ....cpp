/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   dept. of CSE, MBSTU          #                                  *
*                #   Date : 02/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL leap(LL c);
LL hulukulu(LL c);
LL bulukulu(LL c);
main()
{
    LL n;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(cin>>n)
    {
        LL l=leap(n);
        LL h=hulukulu(n);
        LL b=bulukulu(n);
        if(l==1)
            cout<<"This is leap year."<<endl;
        if(h==1)
            cout<<"This is huluculu festival year."<<endl;
        if(b==1)
            cout<<"This is buluculu festival year."<<endl;
        if(l==0 && b==0 && h==0)
            cout<<"This is an ordinary year."<<endl;
        cout<<endl;

    }
}
LL leap(LL c)
{
    if(c%4==0)
    {
        if(c%400==0)
            return 1;
        else if(c%100==0)
            return 0;
        else
            return 1;
    }
    else
        return 0;
}
LL hulukulu(LL c)
{
    if (c%15==0)
        return 1;
    else
        return 0;
}
LL bulukulu(LL c)
{
    if(c%55==0)
        return 1;
    else
        return 0;
}
