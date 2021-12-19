/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 19/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

main()
{
    LL n,F;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    while(cin>>n)
    {
        //if(n<0)
        //n=-n;
        if(n<0)
        {
            if(n%2==-1)
                cout<<"Overflow!"<<endl;
            else
                cout<<"Underflow!"<<endl;
        }
        else
        {
            if(n>=14 )
                cout<<"Overflow!"<<endl;
            else if(n>7 && n<14)
            {
                F=1;
                for(LL j=1; j<=n; j++)
                    F*=j ;
                cout<<F<<endl;
            }
            else
                cout<<"Underflow!"<<endl;
        }
    }
    /*else
    {
        //n=-n;
        if(n<-13)
            cout<<"Overflow!"<<endl;
        else if(n>(-8))
            cout<<"Underflow!"<<endl;
        else if(n>7 && n<14 && n%2==0)
        {
            F=1;
            for(LL j=1; j<=n; j++)
                F*=j ;
            cout<<F<<endl;
        }
        else
            cout<<"Underflow!"<<endl;
    }*/
}
