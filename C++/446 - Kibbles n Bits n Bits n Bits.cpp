/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 12/11/17              #                                  *
*****************##################################************************************************/
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
LL hexadecimal (S s);
LL binary(LL n);
LL length(LL n);

main()
{
    LL n;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>n;
    for(LL i=0; i<n; i++)
    {
        S s1,s2,s3;
        cin>>s1>>s3>>s2;
        ///cout<<s1<<s3<<s2;
        LL n1=hexadecimal(s1);
        LL n2=hexadecimal(s2);
        //cout<<n1<<" "<<n2;
        LL result=n1+n2;
        if(s3=="+")
            result=n1+n2;
        else if(s3=="-")
            result=n1-n2;
        LL m1=binary(n1);
        LL m2=binary(n2);

        LL len1=length(m1);
        LL len2=length(m2);

        for(LL j=0; j<13-len1; j++)
            cout<<0;
        if(m1!=0)
            cout<<m1;
            cout<<" "<<s3<<" ";
        for(LL j=0; j<13-len2; j++)
            cout<<0;
        if(m2!=0)
            cout<<m2;
        cout<<" = "<<result<<endl;
    }
}


LL hexadecimal (S s)
{
    LL length=s.length();
    LL power=0,sum=0;
    for(LL i=length-1; i>=0; i--)
    {
        LL n;
        if(s[i]=='A')
            n=10;
        else if(s[i]=='B')
            n=11;
        else if(s[i]=='C')
            n=12;
        else if(s[i]=='D')
            n=13;
        else if(s[i]=='E')
            n=14;
        else if(s[i]=='F')
            n=15;
        else
        {
            n=s[i]-'0';
        }
        sum=sum+(n*pow(16,power++));

    }
    //cout<<sum;
    return sum;

}

LL binary(LL n)
{
    LL power=1,res=0;
    while(n!=0)
    {
        LL r=n%2;
        n=n/2;
        res+=r*power;
        power*=10;
    }
    return res;
}

LL length(LL n)
{
    LL l=0;
    while(n)
    {
        n/=10;
        l++;
    }
    return l;
}
