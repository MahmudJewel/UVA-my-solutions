/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 23/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
void div(char s[],LL n);
void rem(char s[],LL n);

main()
{
    LL b;
    char a[1000000],c[1];
    while(cin>>a>>c[0]>>b)
    {
        if(c[0]=='/')
            div(a,b);
       else if(c[0]=='%')
            rem(a,b);
    }
}

void div(char s[],LL n)
{
    LL rem=0,m=1;
    for(LL i=0;i<strlen(s);i++)
    {
        rem=s[i]-'0'+rem*10;
        if(rem/n!=0)
            m=0;
        if(!m)
            cout<<rem/n;
            rem%=n;

    }
    if(m)
        cout<<0;
    cout<<endl;
}

void rem(char s[],LL n)
{
    LL div=0;
    for(LL i=0;i<strlen(s);i++)
    {
        div=s[i]-'0'+div*10;
        if(div/n!=0)
        {
            div%=n;
        }
    }
    cout<<div<<endl;
}

