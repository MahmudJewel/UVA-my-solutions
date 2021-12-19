#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100],i,j;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        for(j=0; j<n; j++)
            cin>>a[j];
        cout<<"Case "<<i<<": "<<a[n/2]<<endl;
    }
    return 0;
}
