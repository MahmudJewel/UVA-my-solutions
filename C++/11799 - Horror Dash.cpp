#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a[100];
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        for(j=0; j<n; j++)
            cin>>a[j];
        sort(a,a+n);
        cout<<"Case "<<i<<": "<<a[n-1]<<endl;
    }
    return 0;
}
