#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>a>>b)
    {
        if(a<0 || b<0)
            break;
        if(a>b)
            c=a-b;
        else
            c=b-a;
        if(c>50)
            cout<<100-c<<endl;
        else
            cout<<c<<endl;
    }

    return 0;
}
