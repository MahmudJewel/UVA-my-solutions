#include<bits/stdc++.h>
using namespace std;
#define D double
#define LL long long
main()
{
    LL n;
   //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>n;
    for(LL i=1;i<=n;i++)
    {
                vector<D>cost;
        for(LL j=0;j<12;j++)
        {
            D a;
            cin>>a;
            cost.push_back(a);
        }
        D sum=0;
        for(LL j=0;j<12;j++)
            {
                sum+=cost[j];
            }
            D avg=sum/12;
           if(avg<=999.9)
            //cout<<i<<" $"<<avg<<endl;
            printf("%lld $%.2lf\n",i,avg);
           /* else{
            LL c=(LL)avg/1000;
            D m=fmod(avg,100);
                printf("%lld $%lld,%.2lf\n",i,c,m);}*/
           else
            {
                LL t=(LL)avg/1000;
                D m=avg-t*1000;
                if(m<10)
                printf("%lld $%lld,00%.2lf\n",i,t,m);
                else if(m<100)
                    printf("%lld $%lld,0%.2lf\n",i,t,m);
                else
                    printf("%lld $%lld,%.2lf\n",i,t,m);
            }
    }
}
