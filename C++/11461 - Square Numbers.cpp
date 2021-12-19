#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL a,b;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>a>>b)
    {
        if(a+b==0)
            break;
        LL n=0;
        for(LL i=a;i<=b;i++)
        {
            LL c=sqrt(i);
            if(c*c==i)
            n++;
        }
        cout<<n<<endl;
    }
}
