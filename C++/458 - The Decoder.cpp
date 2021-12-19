#include<bits/stdc++.h>
//#define LL long long
using namespace std;
main()
{
    string s;
    int l;
    while(getline(cin,s))
    {
        l=s.size();
        for(int i=0; i<l; i++)
            printf("%c",s[i]-7);
            printf("\n");
    }
}
