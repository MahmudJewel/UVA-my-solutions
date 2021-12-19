#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,a,b,c,d;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        if((a+b+c)<=d || (a+b+d)<=c || (a+c+d)<=b || (b+c+d)<=a)
            cout<<"banana"<<endl;
        else if(a==b && b==c && c==d)
            cout<<"square"<<endl;
        else if((a==b && c==d)|| (a==c && b==d)|| (a==d && b==c)||(b==c && a==d)|| (b==d && a==c)|| (c==d && a==b))
            cout<<"rectangle"<<endl;
        else
            cout<<"quadrangle"<<endl;
    }
}
