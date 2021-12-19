/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 17/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
S st1="AEHIJLMOSTUVWXYZ12358";
S st2="A3HILJMO2TUVWXY51SEZ8";

LL mirror(S s);
LL palindrome(S s);


main()
{
    string s;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(getline(cin,s))
    {
        // sz=s.size();
        LL p=palindrome(s);
        LL m=mirror(s);
        //cout<<m;
        if(p==0 && m==0)
            cout<<s<<" -- is not a palindrome."<<endl;
        else if(p==1 && m==0)
            cout<<s<<" -- is a regular palindrome."<<endl;
        else if(p==0 && m==1)
            cout<<s<<" -- is a mirrored string."<<endl;
        else if(p==1 && m==1)
            cout<<s<<" -- is a mirrored palindrome."<<endl;

        cout<<endl;
    }
}

LL palindrome(S s)
{
    LL sz,c=0;
    sz=s.size();
    for(LL i=0; i<=sz/2; i++)
    {
        if(s[i]!=s[sz-1-i])
            return 0;
    }
    return 1;
}


LL mirror(S s)
{
    S s1;
    LL sz=s.size();
    for(LL j=0; j<=sz/2; j++)
    {
        LL c=0;
        for(LL i=0; i<21; i++)
        {
            if(s[j]==st1[i])
            {
                c=1;
                if(s[sz-1-j]!=st2[i])
                    return 0;
                else
                    break;
            }
        }
        if(c==0)
            return 0;
    }
    return 1;
}
