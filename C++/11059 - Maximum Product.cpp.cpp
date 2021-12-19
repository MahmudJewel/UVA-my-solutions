#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,i,j,cnt,cas=0,sum, product;
    while(cin>>n)
    {
        long long a[n];
        sum=0;
        cas++;
        for(i=0;i<n;i++)
            cin>>a[i];
            for(i=0;i<n;i++)
            {
                product=1;
                for(j=i;j<n;j++)
                {
                    product*=a[j];
                    if(sum<product)
                    sum=product;
                }
            }
        cout<<"Case #"<<cas<<": The maximum product is "<<sum<<"."<<endl<<endl;
    }
}
