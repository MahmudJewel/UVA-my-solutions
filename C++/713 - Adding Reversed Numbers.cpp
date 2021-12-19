/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date :try:10-success:30/05/17#                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
S add_str(S a, S b);
S rev (S a);
S zero(S c);
main()
{
    LL t;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    while(t--)
    {
        getchar();
        S a,b;
        //getline(cin,a);
        //getline(cin,b);
        cin>>a>>b;
        a=rev(a);
        b=rev(b);

        S c=add_str(a,b);
        // cout<<c;
        c=rev(c);
        S mn;
        mn=zero(c);
        //if(c[0]!='0')
            cout<<mn<<endl;

    }
}


S add_str(S a, S b)
{
    a=rev(a);
    b=rev(b);
    if(a.size()<b.size())
        swap(a,b);
    LL l1,l2;
    l1=a.size();
    l2=b.size();
    S c="";
    LL temp=0;
    LL sum=0;
    for(LL i=0; i<l1; i++)
    {
        if(i<l2)
        {
            LL x=a[i]-'0';
            LL y=b[i]-'0';
            sum=x+y+temp;
            temp=0;
            LL rem=sum%10;
            c+=rem+'0';
            if(sum>9)
                temp=1;
            if(i==l1-1 && temp==1)
                c+='1';
        }
        else
        {
            LL x=a[i]-'0';
            sum=x+temp;
            temp=0;
            LL rem=sum%10;
            c+=rem+'0';
            if(sum>9)
                temp=1;
            if(i==l1-1 && temp==1)
                c+='1';

        }
    }
    c=rev(c);
    return c;


}

S rev (S a)
{
    LL l=a.size();
    for(LL i=0; i<l/2; i++)
    {
        swap(a[i],a[l-1-i]);
    }
    return a;
}



S zero(S c)
{
     S t="";
        LL m=0;
        for(LL i=0; i<c.length(); i++)
        {

                if(c[i]=='0' && m==0)
                    continue;
                else
                {
                    t+=c[i];
                    m=1;
                }
               // else if(i==c.length()-1)
                 //   t+=c[i];

        }
        return t;
}
