#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

    
    int N, R,S,D ;
    cin>>N>>R>>S>>D;
   
    vector<pair<int, int>> adj[N + 10]; 
    for(int i=0; i<R;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    
    priority_queue<pair<int,int>,vector<pair<int, int>>,greater<pair<int,int>>>pq;
    

    int dist[N+1];
    for(int i=0;i<N; i++)dist[i]=INT_MAX;
    dist[S] = 0;
    pq.push(make_pair(0,S));
    
    while (pq.empty()==false)
    {
        int distance = pq.top().first;
        int prev_node = pq.top().second;
        pq.pop();

        for(auto it: adj[prev_node]){
            if(dist[it.first]>dist[prev_node]+it.second){
                dist[it.first] = dist[prev_node]+it.second;
                pq.push(make_pair(dist[it.first],it.first));
            }

        }
        
    }
    

    cout<<dist[D]<<endl;
    }
    
    return 0;

}