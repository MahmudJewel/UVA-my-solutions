#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,i,j,c,mx,m,k,l,sp;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>i>>j)
    {
         mx=0;
         k=i;
         l=j;
         if(k>l)
         {
             sp=k;
             k=l;
             l=sp;
         }
        for(m=k; m<=l; m++)
        {
            c=1;
            n=m;
            while(n!=1)
            {
                if(n%2==0)
                {
                    n=n/2;
                    c++;
                }
                else
                {
                    n=3*n+1;
                    c++;
                }
            }
            if(c>mx)
            mx=c;
        }
        cout<<i<<" "<<j<<" "<<mx<<endl;
    }
}
