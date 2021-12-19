/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 28/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL ar1[100001];
LL ar2[100001];
LL ar3[100001];

main()
{
    LL t;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    cin>>t;
    while(t--)
    {
        LL b,sg,sb;
        cin>>b>>sg>>sb;
        for(LL i=0; i<sg; i++)
            cin>>ar1[i];
        for(LL i=0; i<sb; i++)
            cin>>ar2[i];
        sort(ar1,ar1+sg);
        sort(ar2,ar2+sb);
        for(LL i=0; i<=sg/2; i++)
            swap(ar1[sg-1-i],ar1[i]);
        for(LL i=0; i<=sb/2; i++)
            swap(ar2[sb-1-i],ar2[i]);

        // for(LL i=0;i<sg;i++)
        //        cout<<ar1[i]<<" ";
        LL sum1=0;
        LL sum2=0;
        for(LL i=0; i<sg; i++)
            sum1+=ar1[i];
        for(LL i=0; i<sb; i++)
            sum2+=ar2[i];
        if(sum1==sum2)
            cout<<"green and blue died"<<endl<<endl;
        else
        {
            LL a=0;
            if(sg>sb)
                swap(sg,sb);
            for(LL i=0; i<sb; i++)
            {
                LL m=abs(ar1[i]-ar2[i]);
                if(m)
                    ar3[a++]=m;
            }
            if(sum1>sum2)
                cout<<"green wins"<<endl;
            else
                cout<<"blue wins"<<endl;
            sort(ar3,ar3+a);
            for(LL i=a-1; i>=0; i--)
                cout<<ar3[i]<<endl;
            cout<<endl;
        }

    }
}
