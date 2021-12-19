#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL t,a[100000];
    //freopen()
    cin>>t;
    for(LL i=1;i<=t;i++)
    {
        LL num,n,sum,sum1;
        cin>>num;
        for(LL j=0;j<num;j++)
        {
            cin>>a[j];
        }
        for(LL j=0;j<num;j++){
                sum=0;
            for(LL k=0;k<num;k++)
            {
                LL b=a[j]-a[k];
                if(b<0)
                    b=-b;
                    //cout<<b;
                sum=sum+b;
            }
            if(j==0)
                sum1=sum;
            if(sum<sum1)
            {
                sum1=sum;
            }
        }
        cout<<sum1<<endl;
    }
}
