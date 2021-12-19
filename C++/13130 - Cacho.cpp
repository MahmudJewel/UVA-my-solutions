#include<bits/stdc++.h>
using namespace std;
main()
{
    long long t,n,i,j,input[100],c;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        c=0;
        for(j=0; j<5; j++)
            cin>>input[j];
        for(j=0; j<3; j++)
        {
            if((input[j+1]-input[j])==(input[j+2]-input[j+1]))
                c++;
        }
        if(c==3)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }


}
