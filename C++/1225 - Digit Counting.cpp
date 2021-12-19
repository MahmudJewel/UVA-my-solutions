/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   dept. of CSE, MBSTU          #                                  *
*                #   Date : 07/05/17              #                                  *
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
        LL n;
        cin>>n;
        LL a[10];
        memset(a,0,sizeof(a));
        //for(LL i=0;i<=9;i++)
          //  cout<<a[i]<<" ";
        for(LL i=1;i<=n;i++)
        {
            LL c=i;
            //if(i==0)
                //a[i]++;
            while(c!=0)
            {
                LL rem=c%10;
                a[rem]++;
                c=c/10;
            }
        }
        for(LL i=0;i<=9;i++)
        {
            cout<<a[i];
            if(i==9)
                cout<<endl;
            else
                cout<<" ";
        }
    }
}
