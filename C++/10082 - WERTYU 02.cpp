#include<bits/stdc++.h>
//#define LL long long
char change(char b);
using namespace std;
//string change(string b);
char a[]="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";

main()
{
    string b;
    int l;
    while(getline(cin,b))
    {
        l=b.size();
        for(int i=0;i<l;i++)
        {
            b[i]=change(b[i]);
        }
    }




}
char change(char b)
{
    //string a="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    for(int i=0;i<47;i++)
    {
        if(a[i]==b)
            return b[i-1];
    }
    return b;

}
