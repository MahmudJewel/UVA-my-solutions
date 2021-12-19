#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL a[1000000];
main()
{
    LL n,r,i,j,sum,l;
    while(cin>>n>>r)
    {
        l=n*r;
        for(i=0; i<l; i++)
        {
            cin>>a[i];
        }
        j=0;
        for(i=n; i<l; i++)
        {
                a[j]=a[j]+a[i];
                j++;
                if(j==n)
                    j=0;

        }
        sum=a[0];
        for(i=1; i<n; i++)
        {
            if(sum<a[i])
                sum=a[i];
        }
        for(j=n-1; j>=0; j--)
        {
            //cout<<a[j]<<" ";
            if(sum==a[j])
            {
                cout<<j+1<<endl;
                break;
            }
        }
        //cout<<endl;
    }
}
