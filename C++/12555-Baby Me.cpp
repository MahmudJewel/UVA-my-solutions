/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 13/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double


main()
{
    LL t;
    cin>>t;
    for(LL i=1; i<=t; i++)
    {
        S a;
        D b,c,sum=0;
        cin>>b;
        getline(cin,a);
        LL sz=a.size();
        sum=b*.5;
        cout<<sum<<endl;
        if(sz>3)
        {
            D con=a[3]-'0';
            cout<<con<<endl;
            sum=sum+con*.05;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
}
