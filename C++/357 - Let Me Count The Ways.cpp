#include<bits/stdc++.h>
#define LL long long
using namespace std;
main()
{
    char a[1000000];
    LL c=0,n,l,i;
    while(gets(a))
    {
        //getchar();
        //c=0;
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if(a[i]=='"')
            {
                c++;
                if(c%2==1)
                    cout<<"``";
                else
                    cout<<"''";

            }
            else
                cout<<a[i];
        }
        cout<<endl;
    }
}
