#include<bits/stdc++.h>
#define LL long long
using namespace std;
main()
{
    LL n,k,i,j,c,d,e;
    while(cin>>n>>k)
    {
        c=n;
     while(n>=k)
     {
         c=c+(n/k);
         d=n%k;
         e=n/k;
         n=d+e;
     }
     cout<<c<<endl;
    }
}
