#include<bits/stdc++.h>
using namespace std;
#define S string
#define LL long long
main()
{
    S Q="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    //S R="ZXCVBNM<>?"
    S D="`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg' ~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
    //S E="ZX<INWVG\";
    //cout<<Q.size()<<" "<<D.size();
    S s;
    while(getline(cin,s))
    {
        LL  l=s.size();
        for(LL i=0;i<l;i++)
        {
            if(s[i]==' ')
                cout<<s[i];
            else{
            for(LL j=0;j<95;j++)
            {
                if(s[i]==Q[j])
                {
                    cout<<D[j];
                    break;
                }
            }
        }}
        cout<<endl;
    }
}
