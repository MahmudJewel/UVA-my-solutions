#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,c,i,e,m;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {
        c=0;
        e=0;
        if(n==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        for(i=1;i<n;i++)
        {
            if(n%i==0)
                c+=i;
        }
        m=n;
        while(m!=0)
        {
            m=m/10;
            e++;
        }
        for(i=1;i<=5-e;i++)
        {
            cout<<" ";
        }
        if(c==n)
            cout<<n<<"  PERFECT"<<endl;
        else if(c<n)
            cout<<n<<"  DEFICIENT"<<endl;
        else
            cout<<n<<"  ABUNDANT"<<endl;
    }
}
