/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 21/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

S rev (S a);
S add_str(S a, S b);


main()
{
    S s1[100],result="0";
    LL con=-1;
    while(cin>>s1[++con])
    {
        if(s1[con]=="0")
            break;
        result=add_str(s1[con],result);
    }
    cout<<result<<endl;

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

