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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(getline(cin,s))
    {
        LL l=s.size();
        //cout<<l<<endl;
        S str="";
        for(LL i=0; i<l; i++)
        {
            if(s[i]==' ')
            {
                reverse(str.begin(),str.end());
                cout<<str;
                cout<<s[i];
                str="";
            }
            else
            {
                str+=s[i];
            }
        }
        if(s[l-1]!=' ')
        {
            reverse(str.begin(),str.end());
            cout<<str;
        }
        cout<<endl;
    }
}

/*
S str;
        stringstream ss;
        ss<<s;
        LL con=0;
        while(ss>>str)
        {
            con++;
            reverse(str.begin(),str.end());
            if(con==1)
            cout<<str;
            else
            cout<<" "<<str;

        }
        cout<<endl;
        */
