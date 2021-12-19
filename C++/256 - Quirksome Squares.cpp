/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 19/12/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double
/*LL a2[3]={0,1,81};
LL a4[]={0,1,2025,3025,9801};
LL a6[]={0,1,88209,494209,998001};
LL a8[]={0,1,4941729,7441984,24502500,25502500,52881984,60481729,99980001};
LL digit(LL x);
main()
{
    LL number;
    while(cin>>number)
    {
        if(number==2)
        {
            cout<<"00"<<endl;
            for(LL i=1;i<3;i++)
            {
                LL k=digit(a2[i]);
                for(LL j=1;j<=2-k;j++)
                    cout<<0;
                cout<<a2[i]<<endl;
            }
        }

        else if(number==4)
        {
            cout<<"0000"<<endl;
            for(LL i=1;i<5;i++)
            {
                LL k=digit(a4[i]);
                for(LL j=1;j<=4-k;j++)
                    cout<<0;
                cout<<a4[i]<<endl;
            }
        }
         else if(number==6)
        {
            cout<<"000000"<<endl;
            for(LL i=1;i<5;i++)
            {
                LL k=digit(a6[i]);
                for(LL j=1;j<=6-k;j++)
                    cout<<0;
                cout<<a6[i]<<endl;
            }
        }
         else if(number==8)
        {
            cout<<"00000000"<<endl;
            for(LL i=1;i<9;i++)
            {
                LL k=digit(a8[i]);
                for(LL j=1;j<=8-k;j++)
                    cout<<0;
                cout<<a8[i]<<endl;
            }
        }
    }
}

LL digit(LL x)
{
    LL an=0;
    while(x)
    {
     an++;
     x=x/10;
    }
    return an;
}*/


LL n;
LL r;
LL a;
LL b;
bool sqr(LL m);
void ans(LL m);
LL digit(LL x);

main()
{
    while(cin>>n)
    {
        r=n/2;
        if(n==2)
        {
            a=99;
            b=10;
        }
        else if(n==4)
        {
            a=9999;
            b=100;
        }
        else if(n==6)
        {
            a=999999;
            b=1000;
        }
        else if(n==8)
        {
            a=99999999;
            b=10000;
        }
        for(LL i=0; i<=a; i++)
        {
            if(sqr(i)==true)
            {
                ans(i);
            }

        }
        //cout<<"finish";
    }
}

bool sqr(LL m)
{
    LL x=sqrt(m);
    if(x*x==m)
    {
        //cout<<m<<endl;
        return true;
    }
    else{
            //cout<<0<<endl;
        return false;
    }
}

void ans(LL m)
{
    LL f=m/b;
    LL re=m%b;
    LL x=f+re;
    if(x*x==m)
    {
        LL cos=digit(m);
        for(LL j=1;j<=n-cos;j++)
            cout<<0;

        if(m==0)
            cout<<endl;
        else
        cout<<m<<endl;
    }
}

LL digit(LL x)
{
    LL an=0;
    while(x)
    {
     an++;
     x=x/10;
    }
    return an;
}
