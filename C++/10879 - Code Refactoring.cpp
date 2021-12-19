#include<bits/stdc++.h>
#define LL long long
using namespace std;
main()
{
    LL t,n,k;
    cin>>t;
    for(LL i=1;i<=t;i++)
    {
        k=0;
        cin>>n;
        cout<<"Case #"<<i<<": "<<n;
        for(LL j=2;j<=n;j++)
        {
            LL c=n/j;
            if(c*j==n){
                cout<<" = "<<j<<" * "<<c;
                k++;
            }
            //cout<<" "<<j*c;
            if(k==2)
                break;
        }
        cout<<endl;
    }

}
