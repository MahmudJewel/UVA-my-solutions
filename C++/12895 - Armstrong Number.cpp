/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 29/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    LL t;
    cin>>t;
    while(t--)
    {
        LL n,a[100],m,zero=0;
        cin>>n;
        m=n;
        while(m)
        {
            a[zero++]=m%10;
            m/=10;
        }
        LL sum=0;
        for(LL i=0;i<zero;i++)
        { LL p=1;
        for(LL j=1;j<=zero;j++)
        {
            p=p*a[i];
        }
        //cout<<p<<" ";

            sum=sum+p;
        }
        //cout<<sum;
       if(sum==n)
        cout<<"Armstrong"<<endl;
       else
        cout<<"Not Armstrong"<<endl;
    }
}
