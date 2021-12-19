/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 24/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

struct st
{
    S name;
    LL l,h;
};

int main()
{
    LL t;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    for(LL i=1; i<=t; i++)
    {
        LL n;
        cin>>n;
        st nme[n];
        for(LL j=0; j<n; j++)
        {
            cin>>nme[j].name>>nme[j].l>>nme[j].h;

        }
        LL price;
        cin>>price;
        S result;
        for(LL j=0; j<price; j++)
        {
            LL cnt=0;
            LL pr;
            cin>>pr;
            for(LL k=0; k<n; k++)
            {
                if(pr>=nme[k].l && pr<=nme[k].h)
                {
                    result=nme[k].name;
                    cnt++;
                    if(cnt>1)
                        break;
                }
            }
            if(cnt==1)
                cout<<result<<endl;
            else
                cout<<"UNDETERMINED"<<endl;
        }
        if(i!=t)
            cout<<endl;
    }
    return 0;
}
