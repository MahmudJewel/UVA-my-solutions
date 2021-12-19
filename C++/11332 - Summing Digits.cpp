#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,n,i;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(cin>>n)
    {
        if(n==0)
            break;
        s=0;
        while(n>0)
        {
            s=s+n%10;
            n=n/10;
        }
        while(s>9)
        {
            n=s;
            s=0;
            while(n>0)
            {
                s=s+n%10;
                n=n/10;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
