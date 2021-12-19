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


main()
{
    LL a,b;
    while(cin>>a>>b)
    {
        if(a==0 || a<b || b<2)
        {
            cout<<"Boring!"<<endl;
            continue;
        }
        vector<LL>vec;
        vec.push_back(a);
        LL con=1;
        while(a>1)
        {
            if(a%b!=0)
            {
                cout<<"Boring!";
                con=0;
                break;
            }
            a/=b;
            vec.push_back(a);
        }
        //vec.push_back(1);
        if(con)
            cout<<vec[0];
        if(con)
        {
            for(LL i=1;i<vec.size();i++)
                cout<<" "<<vec[i];
        }
        cout<<endl;
    }
}
