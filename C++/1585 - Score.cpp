#include<bits/stdc++.h>
#define LL long long
using namespace std;
main()
{
    LL t,sum,c;
    string s;
    cin>>t;
    for(LL i=1;i<=t;i++)
    {
        sum=0;
        c=1;
        cin>>s;
        LL l=s.size();
        for(LL j=0;j<l;j++)
        {
            if(s[j]=='X')
                c=0;
            sum+=c;
            c++;
        }
        cout<<sum<<endl;
    }
}
