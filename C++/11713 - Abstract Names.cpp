#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL n;
    cin>>n;
    getchar();
    while(n--)
    {
        string s1,s2;
        LL sz1,sz2;
        getline(cin,s1);
        getline(cin,s2);
        sz1=s1.size();
        sz2=s2.size();
        if(sz1!=sz2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            LL c=0,d=0;
            for(LL i=0; i<sz1; i++)
            {
                if(s1[i]!=s2[i])
                    d++;
            }
            for(LL i=0; i<sz1; i++)
                {
                    if(s1[i]!=s2[i]){
            if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
            {
                if(s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u')
                    c++;
            }
            }}
            if(c==d)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;}}
            /*for(LL i=0; i<sz1; i++)
            {
                {
                    if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
                    {
                        if(s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u')
                        d++;
                    }
                }
            }
            if(c==d)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;/*
            //for(LL i=0;i<c;i++)
              //  cout<<name[i]<<" ";
            /*LL k=0,sz3=name.size();
            for(LL i=0;i<sz3;i++){

            {
                if(s2[name[i]]!='a' || s2[name[i]]!='e' || s2[name[i]]!='i' || s2[name[i]]!='o' || s2[name[i]]!='u')
                {
                    cout<<"No"<<endl;
                    k=1;
                    break;
                }
                //name.pop_back();
            }}
            if(k==0)
                cout<<"Yes"<<endl;*/

}
