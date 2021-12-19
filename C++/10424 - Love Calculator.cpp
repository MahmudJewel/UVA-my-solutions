/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 15/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
S a= "abcdefghijklmnopqrstuvwxyz";
LL most(S c,LL l);
LL reduce(LL n);
S lower(S s,LL l1);

main()
{
    S s1,s2;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    while(getline(cin,s1) && getline(cin,s2))
    {
        //s1[0]=tolower(s1[0]);
        LL sum1=0,sum2=0,len1,len2;
        len1=s1.size();
        len2=s2.size();
        s1=lower(s1,len1);
        s2=lower(s2,len2);
        sum1=most(s1,len1);
        sum2=most(s2,len2);
        //cout<<sum1<<endl;
        if(sum1==0)
            sum1=1;
        if(sum2==0)
            sum2=1;
        LL k1=reduce(sum1);
        //cout<<s1<<endl<<s2;

        LL k2=reduce(sum2);
        D f;
        if(k2<=k1)
            f=((D)k2/(D)k1)*100;
        else
            f=((D)k1/(D)k2)*100;

        printf("%.2lf %c\n",f,'%');
        //cout<<" %"<<endl;
    }
}

LL reduce(LL n)
{
    LL m=0;
    while(n)
    {
        LL rem=n%10;
        n/=10;
        m+=rem;
    }
    if(m>9)
        reduce(m);
    else
        return m;
}

LL most(S c,LL l)
{
    LL sum=0;
    for(LL i=0; i<l; i++)
    {
        for(LL j=0; j<26; j++)
        {
            if(a[j]==c[i])
            {
                sum+=(j+1);
                break;
            }
        }
    }
     return sum;
}

    S lower(S s,LL l1)
    {
        for(LL i=0; i<l1; i++)
        {
               s[i]= tolower(s[i]);
        }
        return s;
    }
