#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        {
            long long s,d,j,c=0;
            cin>>s>>d;
            for(j=0; j<=s; j++)
            {
                if(s-j-j==d)
                {
                    d=j;
                    s=s-j;
                    c=1;
                    break;
                }
            }
            if(c==1)
                cout<<s<<" "<<d<<endl;
            else
                cout<<"impossible"<<endl;
        }
    }
}
