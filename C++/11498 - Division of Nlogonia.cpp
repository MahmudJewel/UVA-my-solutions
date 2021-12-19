#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,m,x,y,i,X,Y;
    //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
    while(cin>>k)
    {
        if(k==0)
            break;
        cin>>n>>m;
        for(i=1; i<=k; i++)
        {
            cin>>x>>y;
            X=x-n;
            Y=y-m;
            if(X==0 || Y==0)
                cout<<"divisa"<<endl;
            else if( X>0 && Y>0)
                cout<<"NE"<<endl;
            else if( 0>X && Y>0)
                cout<<"NO"<<endl;
            else if( 0>X && 0>Y)
                cout<<"SO"<<endl;
            else
                cout<<"SE"<<endl;
        }
    }

    return 0;
}
