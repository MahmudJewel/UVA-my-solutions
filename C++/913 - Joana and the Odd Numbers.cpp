#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,i,c,sum;
    while(cin>>n)
    {
        c=1;
        for(i=n;i>1;i=i-2)
        {
            c+=i*2;
        }
        sum=c+(c-2)+(c-4);
        cout<<sum<<endl;
    }
}
