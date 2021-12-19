/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 08/06/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
#define LL long long
#define S string
#define D double
#define fix 2001
using namespace std;
LL num[2001];
void prime (LL x);

main()
{
    LL t;
    prime(fix);
    cin>>t;
    //S s;
    //cin>>s;
    for(LL i=1; i<=t; i++)
    {
        S str;
        cin>>str;
        LL l=str.size();
        cout<<"Case "<<i<<": ";
        LL check=0;
        for(LL j=0; j<l; j++)
        {
            LL k=0;
            LL c=0;
            while(c<j)
            {
                if(str[c++]==str[j])
                {
                    k=1;
                    break;
                }
            }
            // LL
            if(k==1)
                continue;
            else
            {
                LL con=0;
                for(LL k=j; k<l; k++)
                {
                    if(str[j]==str[k])
                        con++;
                }
                if(num[con]==0)
                {
                    cout<<str[j];
                    check++;
                }
                //else
                //<<endl;
            }
            //cout<<endl;
        }
        if(check==0)
            cout<<"empty"<<endl;
        else
            cout<<endl;

    }

}

void prime (LL x)
{
    LL sq=sqrt(x);
    num[1]=1;
    num[0]=1;
    for(LL i=2; i<=sq; i++)
    {
        if(num[i]==0)
        {
            for(LL j=2; j*i<=x; j++)
                num[j*i]=1;
        }
    }
}
