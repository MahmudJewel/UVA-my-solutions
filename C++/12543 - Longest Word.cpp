/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 22/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

S lwr(S s);

main()
{
    S s,stor;
    LL len=0;
    while(cin>>s)
    {
        if(s=="E-N-D")
            break;
        LL l=s.size();
         LL l1=0;
        for(LL i=0;i<l;i++)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || s[i]=='-' )
                l1++;
        }
        if(l1>len)
        {
            stor=s;
            len=l1;
        }
        //if(l==len)
          //  continue;

    }
    stor=lwr(stor);
    cout<<endl;
    //cout<<stor<<endl;
}

S lwr(S s)
{
    LL l=s.size();
    for(LL i=0;i<l;i++)
    {
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || s[i]=='-' ){
        s[i]=tolower(s[i]);
        cout<<s[i];
    }}
    return s;
}
