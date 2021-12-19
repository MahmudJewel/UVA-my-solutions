/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 01/06/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    LL t;
    cin>>t;
    for(LL i=1;i<=t;i++)
    {
        LL r;
        cin>>r;
        LL length=r*5;
        LL width=r*3;
        LL length_right=length*0.55;
        LL length_left=length-length_right;
        LL width_upper=width/2;
        cout<<"Case "<<i<<":"<<endl;
        cout<<"-"<<length_left<<" "<<width_upper<<endl;
        cout<<length_right<<" "<<width_upper<<endl;
        cout<<length_right<<" "<<"-"<<width_upper<<endl;
        cout<<"-"<<length_left<<" "<<"-"<<width_upper<<endl;
        //cout<<length_right;
    }
}
