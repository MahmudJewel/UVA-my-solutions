#include<bits/stdc++.h>
#define LL long long
LL sum;
using namespace std;
main()
{
    LL n,i;
    while(cin>>n)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=(i*i*i);
        }
        cout<<sum<<endl;
    }

}
