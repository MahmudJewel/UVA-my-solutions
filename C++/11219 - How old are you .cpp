#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
main()
{
    int dc,mc,yc,db,mb,yb,d,m,y,t,i,d1,m1,Y1;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        //cin>>dc/>>mc/>>yc>>db/>>mb/>>yb;
        //cout<<endl;
        scanf("%d/%d/%d",&dc,&mc,&yc);
        scanf("%d/%d/%d",&db,&mb,&yb);
        d=dc-db;
        m=mc-mb;
        y=yc-yb;
        if(d<0)
       {
           m=m-1;
           if(m<0)
           {
               y=y-1;
           }
           if(y<0)
            cout<<"Case #"<<i<<": Invalid birth date"<<endl;
        else if(130<y)
            cout<<"Case #"<<i<<": Check birth date"<<endl;
        else if(y==0)
            cout<<"Case #"<<i<<": "<<y<<endl;
        else
            cout<<"Case #"<<i<<": "<<y<<endl;
       }
       else
       {
           if(m<0)
            y=y-1;

        if(y<0)
            cout<<"Case #"<<i<<": Invalid birth date"<<endl;
        else if(130<y)
            cout<<"Case #"<<i<<": Check birth date"<<endl;
        else if(y==0)
            cout<<"Case #"<<i<<": "<<y<<endl;
        else
            cout<<"Case #"<<i<<": "<<y<<endl;}
        //cout<<y<<" "<<m<<" "<<d<<endl;
    }
}
