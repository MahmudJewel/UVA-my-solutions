#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    string s;
    LL k=1;
    while(cin>>s)
    {
        LL l=s.size();
        if(l==0)
            break;
        cout<<"Case "<<k<<":"<<endl;
        k++;
        LL m,n,c;
        cin>>c;
        for(LL i=1;i<=c;i++)
        {
            LL con=0;
            cin>>m>>n;
            if(m>n)
                swap(m,n);
            for(LL j=m;j<n;j++)
            {
                if(s[j]!=s[j+1]){
                    con=1;
                    break;}
            }
            if(con==1)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
}
