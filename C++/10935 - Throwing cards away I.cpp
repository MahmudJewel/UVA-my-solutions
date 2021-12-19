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
    LL n;
    while(cin>>n)
    {
        if(n==0)
            break;
        vector<LL>vec;
        for(LL i=0; i<n; i++)
        {
            vec.push_back(i+1);
        }
        //LL l=n;
        if(n>1)
        {
            cout<<"Discarded cards:";
            cout<<" "<<vec.front();
            vec.erase(vec.begin());
            vec.push_back(vec.front());
            vec.erase(vec.begin());
        }
        else
            cout<<"Discarded cards:";
        while(vec.size()>1)
        {
            cout<<", "<<vec.front();
            vec.erase(vec.begin());
            vec.push_back(vec.front());
            vec.erase(vec.begin());
        }
        cout<<endl<<"Remaining card: "<<vec[0]<<endl;
    }
}
