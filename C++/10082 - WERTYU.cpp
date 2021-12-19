#include<bits/stdc++.h>
//#define LL long long
using namespace std;
main()
{
    string s,s1="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    // `1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./
    int l;
    while(getline(cin,s))
    {

        /*for(int i=1; i<47; i++)
        {
            s1[i]=s1[i-1];
        }*/

        l=s.size();
        for(int i=0; i<l; i++)
        {
            for(int j=1; j<47; j++)
            {
                if(s[i]==s1[j])
                {
                    cout<<s1[j-1];
                    break;
                }
            }
            if(s[i]==' ')
                cout<<s[i];
        }
        cout<<endl;
        // cout<<s1;



    }
}
