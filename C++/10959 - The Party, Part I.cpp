#include<bits/stdc++.h>
using namespace std;
#define LL long long
//void bfs(LL s, LL p);
main()
{
    LL t;
    cin>>t;
    for(LL k=1;k<=t;k++)
    {
        LL cost[1000];
        LL visited[1000];
        vector<LL>name[1000];
        memset(visited,0,sizeof(visited));
       // cout<<endl<<endl;
        LL p,d;
        cin>>p>>d;
        for(LL i=1; i<=d; i++)
        {
            LL a,b;
            cin>>a>>b;
            name[a].push_back(b);
            name[b].push_back(a);
        }
        //bfs(0,p);
        for(LL i=0; i<=p; i++)
        {
            cost[i]=10000;
        }
        queue<LL>q;
        q.push(0);
        cost[0]=0;
        visited[0]=1;
        while(!q.empty())
        {
            LL u=q.front();
            q.pop();
            LL sz=name[u].size();
            for(LL i=0; i<sz; i++)
            {
                LL v=name[u][i];
                if(visited[v]==0)
                {
                    visited[v]=1;
                    if(cost[u]<cost[v])
                    {
                        cost[v]=cost[u]+1;
                        //cout<<cost[v]<<endl;
                        q.push(v);
                    }
                }
            }

        }
        for(LL i=1; i<p; i++)
            cout<<cost[i]<<endl;
            if(k!=t)
            cout<<endl;
    }
}

