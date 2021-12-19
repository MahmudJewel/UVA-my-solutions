#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i=1;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    while(i<=t)
    {
        cin>>n;
        n=(n*63+7492)*5-498;
        if(n<0)
            n=(-1)*n;
        n=n%100;
        n=n/10;
        cout<<n<<endl;
        i++;
    }
    return 0;
}
