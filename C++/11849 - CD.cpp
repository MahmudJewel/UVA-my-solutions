/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 22/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string


main()
{
    LL a,b;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        vector<LL>vec1;
        vector<LL>vec2;
        for(LL i=0; i<a; i++)
        {
            LL m;
            cin>>m;
            vec1.push_back(m);
        }
        for(LL i=0; i<b; i++)
        {
            LL m;
            cin>>m;
            vec2.push_back(m);
        }
        LL cnt=0;

        for(LL i=0; i<a; i++)
        {
            LL l=vec2.size();
            if(l==0)
                break;
            for(LL j=0; j<l; j++)
            {
                if(vec1[i]==vec2[j])
                {
                    cnt++;
                    //vec2.pop_back();
                    vec2.erase(vec2.begin()+j);
                    break;
                }
                if(vec1[i]<vec2[j])
                    break;
            }
        }
        cout<<cnt<<endl;
    }
}
