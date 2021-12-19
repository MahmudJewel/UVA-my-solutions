/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 30/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    LL t;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    cin>>t;
    for(LL i=1; i<=t; i++)
    {
        LL n;
        S s;
        cin>>n;
        getchar();
        cin>>s;
        LL b=0;
        LL w=0;
        LL t=0;
        LL a=0;
        for(LL j=0; j<n; j++)
        {
            if(s[j]=='A')
                a++;
            else if(s[j]=='B')
                b++;
            else if(s[j]=='W')
                w++;
            else if(s[j]=='T')
                t++;
        }
        if(a==n)
            cout<<"Case "<<i<<": ABANDONED"<<endl;
        else if(b==n-a)
            cout<<"Case "<<i<<": BANGLAWASH"<<endl;
        else if(w==n-a)
            cout<<"Case "<<i<<": WHITEWASH"<<endl;

        else if(b==w)
            cout<<"Case "<<i<<": DRAW "<<b<<" "<<t<<endl;
        else if(b>w)
            cout<<"Case "<<i<<": BANGLADESH "<<b<<" - "<<w<<endl;
        else if(w>b)
            cout<<"Case "<<i<<": WWW "<<w<<" - "<<b<<endl;


    }
}
