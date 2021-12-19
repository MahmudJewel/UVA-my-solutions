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

S arry[5001];

S fibonacci(LL n);
S add_str(S a, S b);
S rev (S a);

main()
{
    LL n;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    arry[0]='0';
    arry[1]='1';
    for(LL i=2;i<=5000;i++)
    {
        arry[i]=add_str(arry[i-2],arry[i-1]);
    }
    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<arry[n]<<endl;
    }
}

/*S fibonacci(LL n)  /// time limit;
{
    S a="0";
    S b="1";
    S sum;
    if(n==0)
        return "0";
    else if(n==1)
        return "1";
    else
    {
        for(LL i=2; i<=n; i++)
        {
            sum=add_str(a,b);
            a=b;
            b=sum;
        }
        return sum;
    }
}*/


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
    for(LL i=0;i<l1;i++)
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
    for(LL i=0;i<l/2;i++)
    {
        swap(a[i],a[l-1-i]);
    }
    return a;
}
