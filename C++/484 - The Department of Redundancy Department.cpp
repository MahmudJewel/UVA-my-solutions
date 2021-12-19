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
main()
{
    S s,s1;
    vector<S>vec;
    while(getline(cin,s))
    {
        stringstream ss;
        ss<<s;
        while(ss>>s1)
        {
            vec.push_back(s1);
        }}
        LL sz=vec.size();
        //cout<<sz;
        for(LL i=0; i<sz; i++)
        {
            S str=vec[i];
            LL f=0;
            if(vec[i]=="m")
                continue;
            else
                for(LL j=0; j<sz; j++)
                {
                    if(str==vec[j])
                    {
                        f++;
                        vec[j]="m";
                    }
                }
            cout<<str<<" "<<f<<endl;
        }
    }
