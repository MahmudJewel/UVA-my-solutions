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
    S s;
    while(cin>>s)       //C, G, J, K, Q, S, X, or Z
    {
        LL l=s.size();
        for(LL i=0; i<l-1; i++)
        {
            if((s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V')&& s[i+1]!='B' && s[i+1]!='F' && s[i+1]!='P' && s[i+1]!='V')
                cout<<1;
            //else if(s[i]=='F' && s[i+1]!='F' && s[i+1]!='B' && s[i+1]!='P' && s[i+1]!='V')
            // cout<<1;
            //else if(s[i]=='P' && s[i+1]!='P' && s[i+1]!='F' && s[i+1]!='B' && s[i+1]!='V')
            //cout<<1;
            //else if(s[i]=='V' && s[i+1]!='V' && s[i+1]!='F' && s[i+1]!='P' && s[i+1]!='B')
            //cout<<1;

            else if((s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z') && (s[i+1]!='C' && s[i+1]!='G' && s[i+1]!='J' && s[i+1]!='K' && s[i+1]!='Q' && s[i+1]!='S' && s[i+1]!='X' && s[i+1]!='Z'))
                cout<<2;
            // else if(s[i]=='C' && s[i+1]!='C')
            //cout<<2;
            //else if(s[i]=='G' && s[i+1]!='G')
            //cout<<2;
            //else if(s[i]=='J' && s[i+1]!='J')
            // cout<<2;
            //else if(s[i]=='K' && s[i+1]!='K')
            //cout<<2;
            //else if(s[i]=='Q' && s[i+1]!='Q')
            //cout<<2;
            //else if(s[i]=='S' && s[i+1]!='S')
            // cout<<2;
            //else if(s[i]=='X' && s[i+1]!='X')
            //cout<<2;
            //else if(s[i]=='Z' && s[i+1]!='Z')
            // cout<<2;

            else if((s[i]=='D' || s[i]=='T') && (s[i+1]!='D' && s[i+1]!='T'))
                cout<<3;
            //else if(s[i]=='D' && s[i+1]!='D')
            //cout<<3;
            //else if(s[i]=='T' && s[i+1]!='T')
            //cout<<3;

            else if((s[i]=='L') && s[i+1]!='L')
                cout<<4;

            else if((s[i]=='M' || s[i]=='N') && (s[i+1]!='M' && s[i+1]!='N'))
                cout<<5;
            //else if(s[i]=='M' && s[i+1]!='M')
            //cout<<5;
            //else if(s[i]=='N' && s[i+1]!='N')
            //cout<<5;

            else if(s[i]=='R' && s[i+1]!='R')
                cout<<6;
        }
        LL i=l-1;
        if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V')
            cout<<1;
        else if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z')
            cout<<2;
        else if(s[i]=='D' || s[i]=='T')
            cout<<3;
        else if(s[i]=='L')
            cout<<4;
        else if(s[i]=='M' || s[i]=='N')
            cout<<5;
        else if(s[i]=='R')
            cout<<6;
        cout<<endl;
    }
}
