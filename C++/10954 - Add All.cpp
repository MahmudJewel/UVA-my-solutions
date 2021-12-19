/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 15/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL ar[5000];

main()
{
    LL n;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(cin>>n)
    {
        if(n==0)
        break;
        for(LL i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        //for(LL i=0;i<n;i++)
            //cout<<ar[i]<<" ";
            LL arr[5000];
           LL sum1=ar[0];
            LL result=0;
        for(LL i=1;i<n;i++)
        {
            sum1=sum1+ar[i];
            arr[i]=sum1;
        }
        for(LL i=1;i<n;i++)
        {
            result+=arr[i];
        }
        cout<<result<<endl;
    }
}

