#include<bits/stdc++.h>
using namespace std;
#define LL double
main()
{
    LL n,p;
    while(cin>>n>>p)
    {
        LL s=pow(p,(1.0/n));
        printf("%.0lf\n",s);

    }
}
