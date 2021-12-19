#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define ma 10000
LL a[ma],m;
void find_num(LL n);
main()
{
    LL n,ar[ma],k=1;

    while(cin>>m>>n)
    {
        if(m==0 && n==0)
            break;
        cout<<"CASE# "<<k++<<":"<<endl;
        for(LL i=0; i<m; i++)
            cin>>a[i];
            sort(a,a+m);
           // for(LL i=0; i<m; i++)
           // cout<<a[i]<<" ";
        for(LL i=0; i<n; i++)
            cin>>ar[i];
        for(LL i=0; i<n; i++)
        {
           find_num(ar[i]);

        }

    }
}
void find_num(LL n)
{
    LL c=0,i;
    for(i=0; i<m; i++)
    {
        if(a[i]==n)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        cout<<n<<" found at "<<i+1<<endl;
    else
        cout<<n<<" not found"<<endl;

}
