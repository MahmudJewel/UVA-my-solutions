#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100],t,n,i,j,sum;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        sum=0;
        cin>>n;
        for(j=0;j<n;j++)
            cin>>ar[j];
        sort (ar,ar+n );
        for(j=0;j<n-1;j++)
            sum+=(ar[j+1]-ar[j]);
        cout<<2*sum<<endl;

    }
    return 0;
}
