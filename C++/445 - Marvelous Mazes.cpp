/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 20/12/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double


main()
{
    S s;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(getline(cin,s))
    {
        LL l=s.size();
        LL sp=0;
        for(LL i=0; i<l; i++)
        {
             if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9')
            {
                LL con=s[i]-'0';
                sp+=con;
            }
            else if(s[i]=='b')
            {
                //cout<<sp;
                while(sp--)
                    cout<<" ";
                    sp=0;

            }
            else if(s[i]=='!')
            {
                    cout<<endl;
                    sp=0;

            }

            else
            {
                //cout<<sp;
                while(sp--)
                    cout<<s[i];
                    sp=0;
            }
        }
        cout<<endl;
    }
}
