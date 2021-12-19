#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,c,i;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>a>>b)
    {
        if(a+b==0)
            break;
            c=0;
        for(i=1;i<=b;i++)
        {
            if(i*i<=b && a<=i*i)
                c++;
            if(i*i>b)
                break;
        }
        cout<<c<<endl;
    }
}
