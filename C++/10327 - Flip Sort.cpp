#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL n,a[1001],k;
    while(cin>>n)
    {
        for(LL i=0;i<n;i++)
        {
            cin>>a[i];
        }
        k=0;
        for(LL j=0;j<n-1;j++)
        {
            for(LL i=0;i<n-1-j;i++)
            {
                if(a[i]>a[i+1])
                {
                    LL swape=a[i];
                    a[i]=a[i+1];
                    a[i+1]=swape;
                    k++;
                }

            }
        }
        cout<<"Minimum exchange operations : "<<k<<endl;
    }
}
