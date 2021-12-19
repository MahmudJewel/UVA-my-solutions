#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL t;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    for(LL i=1;i<=t;i++)
    {
        LL t1,t2,t3,att,a[10],avg;
        cin>>t1>>t2>>t3>>att>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        //cout<<a[0]<<a[1]<<a[2];
        avg=(a[1]+a[2])/2;
        LL sum=t1+t2+t3+att+avg;
        cout<<"Case "<<i<<": ";
          if(sum>=90)
            cout<<"A"<<endl;
            else if(sum>=80)
                cout<<"B"<<endl;
            else if(sum>=70)
                cout<<"C"<<endl;
                else if(sum>=60)
                cout<<"D"<<endl;
             else
                cout<<"F"<<endl;
    }
}
