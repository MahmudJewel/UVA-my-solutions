/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 12/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    LL t;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    cin>>t;
    getchar();
    for(LL i=1; i<=t; i++)
    {
        S s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        LL l1=s1.size();
        LL l2=s2.size();
        LL c=0;
        S s3="";
        for(LL j=0; j<l1; j++)
        {
            if(s1[j]==' ')
                continue;
            else
                s3=s3+s1[j];
        }
        //cout<<s3<<endl;
        for(LL j=0; j<l1-1; j++)
        {
            if(s1[0]==' ')
            {
                c=1;
                break;
            }
            else if (s1[j]==' ' && s1[j+1]==' ')
            {
                c=1;
                break;
            }
        }
        if(s2==s1)
            cout<<"Case "<<i<<": Yes"<<endl;
        else if(s2==s3)
        {
            cout<<"Case "<<i<<": Output Format Error"<<endl;
        }
        else
            cout<<"Case "<<i<<": Wrong Answer"<<endl;

    }
}
