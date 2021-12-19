/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 05/06/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    S s;
    while(getline(cin,s))
    {
        LL l=s.size();
        stringstream ss;
        ss>>s;
        S s1;
        vector<S>name;
        while(ss<<s1)
        {
            name.push_back(s1);
        }
        LL lv=name.size();
        for(LL i=0;i<lv;i++)
        {
            S str=name[i];
            if(str[0]=='a'|| str[0]=='A' || str[0]=='e' || str[0]=='E' || str[0]=='i' || str[0]=='I' || str[0]=='o' || str[0]=='O' || str[0]=='u' || str[0]=='U')
            {
                LL ls=;

            }
        }

    }
}
