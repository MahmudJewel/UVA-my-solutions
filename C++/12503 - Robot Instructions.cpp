#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL n;
    cin>>n;
    while(n--)
    {
        LL m,p=0,ar[1000],b=0;;
        cin>>m;
        string s;
        for(LL i=0; i<m; i++)
        {
            cin>>s;
            if (s=="RIGHT")
            {
                ar[b++]=1;
                p++;
            }
            else if(s=="LEFT")
            {
                ar[b++]=-1;
                p--;
            }
        else
        {
            string s1;
            LL con;
            cin>>s1;
            cin>>con;
            ar[b++]=ar[con-1];
            p+=ar[con-1];
        }}
        cout<<p<<endl;
    }
}
