#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,i,j;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    for(i=1;i<=2000;i++)
    {
        a=0;
        j=1;
        cin>>n;
        if(n<0)
            break;
        while(1)
        {
            if(n==1)
                break;
            j=2*j;
            a++;
            if(j>=n)
            break;
        }
        cout<<"Case "<<i<<": "<<a<<endl;
    }

    return 0;
}
