#include<bits/stdc++.h>
#define LL long long
using namespace std;
main()
{
    string a,b;
    LL i,j,c,l,ln,d;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>a>>b)
    {
        c=0;
        d=0;
        l=a.size();
        ln=b.size();
        //cout<<l<<" "<<ln;
        for(i=0; i<l; i++)
        {

            for(j=d; j<ln; j++)
            {
                if(a[i]==b[j])
                {
                    b[j]=NULL;
                    c++;
                    break;
                }
            }
            d=j;
        }
       // cout<<b<<endl;
        if(c==l)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
