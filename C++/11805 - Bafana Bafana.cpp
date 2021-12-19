#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,k,i,x;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k>>p;
        x=(p+k)%n;
        if(x==0)
            cout<<"Case "<<i<<": "<<n<<endl;
        else
            cout<<"Case "<<i<<": "<<x<<endl;
    }

    return 0;
}
