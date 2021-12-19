/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 19/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    LL digit1[100],digit2[100],a,b;
    while(cin>>a>>b)
    {
        if(a+b==0)
            break;
        if(b>a)
            swap(a,b);
        LL c=0;
        while(a)
        {
            digit1[c++]=a%10;
            a/=10;
        }
        LL d=0;
        while(b)
        {
            digit2[d++]=b%10;
            b/=10;
        }
        //for(LL i=0;i<c;i++)
        //cout<<digit1[i]<<" ";
        LL m=0,result=0;
        if(c==d)
        {
            // LL m=0,result=0;

            for(LL i=0; i<c; i++)
            {
                if(digit1[i]+digit2[i]+m>9)
                {
                    m=1;
                    result++;
                }
                else
                    m=0;
            }
            // cout<<result<<endl;
        }
        else
        {
            //LL m=0,result=0;
            for(LL i=0; i<c; i++)
            {
                if(i<d)
                {
                    //break;
                    if(digit1[i]+digit2[i]+m>9)
                    {
                        m=1;
                        result++;
                    }
                    else
                        m=0;
                }
                else
                {
                    if(digit1[i]+m>9)
                    {
                        result++;
                        m=1;
                    }
                    else
                        m=0;
                }
            }
            // cout<<result<<endl;
        }
        if(result==0)
            cout<<"No carry operation."<<endl;
        else if(result==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<result<<" carry operations."<<endl;
    }

}
