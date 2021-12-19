#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL n,p,q,t,m=0;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>p>>q;
        vector<LL>a;
        for(LL i=0; i<n; i++)
        {
            LL c;
            cin>>c;
            a.push_back(c);
        }
        //sort(a,a+n);
        //for(LL i=0;i<n;i++)
        //cout<<a[i];
        LL d=0,sum=0;
        for(LL i=0; i<n; i++)
        {
            sum+=a[i];
            if(sum>q || d==p)
                break;
            d++;
        }
        cout<<"Case "<<++m<<": "<<d<<endl;
    }
}
