/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 25/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string


main()
{
    LL n,t=1;
    while(cin>>n)
    {
        LL result=0;
        for(LL mn=1; mn<=n; mn++)
        {
            char ch[100];
            cin>>ch;
            LL l=strlen(ch);
            sort(ch,ch+l);
            //cout<<ch<<endl;
            //S s="";
            vector<LL>ary;
            LL cnt=1;
            for(LL i=0; i<l-1; i++)
            {
                if(ch[i]!=ch[i+1])
                {
                    //con++;
                    ary.push_back(cnt);
                    cnt=1;
                }
                else if(ch[i]==ch[i+1])
                    cnt++;
            }
            if(ch[l-1]==ch[l-2])
            {
                //cnt++;
                ary.push_back(cnt);
            }
            else
                ary.push_back(1);
            LL si=ary.size();
            //for(LL i=0;i<si;i++)
                //cout<<ary[i]<<" ";
                //cout<<endl;
                LL p=0;
                if(si==1)
                    result=0;
                else{
                for(LL i=0;i<si-1;i++)
                {
                    for(LL j=i+1;j<si;j++)
                    {
                        if(ary[i]==ary[j])
                        {
                            p=1;
                            break;
                        }
                    }
                        if(p)
                            break;
                }
                if(p==0)
                    result++;}

        }
        cout<<"Case "<<t++<<": "<<result<<endl;

    }
}


