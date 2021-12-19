#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL n,k=1;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //k=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        LL a[10000];
        for(LL i=0; i<n; i++)
        {
            cin>>a[i];
        }
        LL sum=0;
        for(LL i=0; i<n; i++)
            sum+=a[i];
        LL d=sum/n;
        LL t=0;
        for(LL i=0; i<n; i++)
        {
            if(a[i]>d)
                t+=(a[i]-d);
        }
        cout<<"Set #"<<k++<<endl<<"The minimum number of moves is "<<t<<"."<<endl<<endl;
    }
}
