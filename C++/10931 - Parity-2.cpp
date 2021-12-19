//long digiter khetre ans asbe na. tai ager logic korai valo.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,b,i,j,r,count;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(1)
    {
        b=0;
        j=1;
        cin>>n;
        if(n==0)
            break;
            count=0;
        for(i=0;n>0;i++)
        {
            r=n%2;
            if(r==1)
                count++;
                b=b+r*j;
                j=j*10;
            n=n/2;
        }
        cout<<"The parity of "<<b<<" is "<<count<<" (mod 2)."<<endl;
    }

    return 0;
}

