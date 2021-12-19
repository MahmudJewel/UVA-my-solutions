#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,ln,j,m,f;
    //string a;
    char a[1000];
    cin>>n;
    getchar();
    for(i=1;i<=n;i++)
    {
        m=0;
        f=0;
        gets(a);
        //getline(cin,a);
        //ln=a.size();
        ln=strlen(a);
        for(j=0;j<ln;j++)
        {
            if(a[j]=='M')
                m++;
            else if (a[j]=='F')
                f++;
        }
        if(m==f && (ln>2))
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }
}
