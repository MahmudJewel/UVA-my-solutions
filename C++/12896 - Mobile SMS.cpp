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
S str[10];
void in();


main()
{
    LL t;
    cin>>t;
    in();
    //cout<<str[9];
    while(t--)
    {
        LL n;
        cin>>n;
        LL ary[n];
        for(LL i=0;i<n;i++)
        {
            cin>>ary[i];
        }
        S s="";
        for(LL i=0;i<n;i++)
        {
            LL m;
            cin>>m;
            s+=str[ary[i]][m-1];
            //cout<<str[ary[i]][m-1]<<" ";
        }
        cout<<s<<endl;
    }
}


void in()
{
    str[0]=" ";
    str[1]=".,?\"";
    str[2]="abc";
    str[3]="def";
    str[4]="ghi";
    str[5]="jkl";
    str[6]="mno";
    str[7]="pqrs";
    str[8]="tuv";
    str[9]="wxyz";

}

