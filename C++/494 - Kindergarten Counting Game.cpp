#include<bits/stdc++.h>
using namespace std;
int KCG(char m[])
{
    long long c,i,x;
    c=0;
        x=strlen(m);
        for(i=0;i<x;i++)
        {
            if(isalpha(m[i]) && !isalpha(m[i+1]))
                c+=1;
        }
        return c;
}
main()
{
    long long d;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char a[10000];
    while(gets(a))
    {
        d=KCG(a);
        cout<<d<<endl;
    }
}
