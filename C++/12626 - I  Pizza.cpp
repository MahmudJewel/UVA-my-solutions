/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 26/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

main()
{
    LL t;
    cin>>t;
    while(t--)
    {
        char ch[700];
        cin>>ch;
        LL l=strlen(ch);
        //sort(ch,ch+l);
        //cout<<ch;
        LL a=0,g=0,I=0,m=0,r=0,t=0;
        for(LL i=0;i<l;i++)
        {
            if(ch[i]=='A')
                a++;
            else if(ch[i]=='G')
                g++;
            else if(ch[i]=='I')
                I++;
            else if(ch[i]=='M')
                m++;
            else if(ch[i]=='R')
                r++;
            else if(ch[i]=='T')
                t++;
        }
        LL result=1000;
        a/=3;
        r/=2;
        if(a<result)
            result=a;
        if(g<result)
            result=g;
        if(I<result)
            result=I;
        if(m<result)
            result=m;
        if(t<result)
            result=t;
        if(r<result)
            result =r;
        cout<<result<<endl;

    }
}
