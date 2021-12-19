#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100],i,j,h,l;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        l=0;
        h=0;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>a[j];
            if(j==0 || a[j]==a[j-1])
                continue;
            else if(a[j]>a[j-1])
                h++;
            else
                l++;
        }
        cout<<"Case "<<i<<": "<<h<<" "<<l<<endl;
    }
    return 0;
}
