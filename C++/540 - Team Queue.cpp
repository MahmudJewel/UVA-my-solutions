#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL t;
    cin>>t;
    for(LL i=1;i<=t;i++)
    {
        LL a,b;
        vector<LL>name1;
        vector<LL>name2;
        cin>>a>>b;
        for(LL j=0;j<a;j++)
        {
            LL c;
            cin>>c;
            name1.push_back(c);
        }
        for(LL j=0;j<a;j++)
        {
            LL c;
            cin>>c;
            name2.push_back(c);
        }
        string s;
        LL m;
        queue<LL>q;
        cout<<"Scenario #"<<i<<endl;
        while(cin>>s>>m)
        {
            if(s=="ENQUEUE"){

                    for(LL j=0)
                q.push(m);}
                else if(s=="DEQUEUE"){
                    LL k;
                k=q.front();
                cout<<k<<endl;
                }
                else if(s=="STOP")
                    break;
        }
    }
}
