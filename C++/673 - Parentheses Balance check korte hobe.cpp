#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
main()
{
    LL n;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    getchar();
    while(n--)
    {
        S s;
        getline(cin,s);
        LL sz=s.size();
        LL f1=0,f2=0,t1=0,t2=0;
        for(LL i=0; i<sz; i++)
        {
            if(s[0]==')' || s[0]==']')
                {f1++;
                 break;}
            if(s[i]=='(')
                f1++;
            else if(s[i]==')')
                f2++;

            else if(s[i]=='[')
                t1++;
            else if(s[i]==']')
                t2++;
        }
        if(f1==f2 && t1==t2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
