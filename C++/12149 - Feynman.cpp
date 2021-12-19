#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,s;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(cin>>n)
    {
        s=0;
        if(n==0)
            break;
        for(i=1;i<=n;i++)
        {
            s+=i*i;
        }
        cout<<s<<endl;
    }


    return 0;
}
