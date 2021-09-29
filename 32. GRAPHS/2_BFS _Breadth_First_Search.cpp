#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2; 
bool vis[N]; //visited array
vector<int> adj[N]; //adjacency list

int main(){
    for(int i=0; i<N; i++){
        vis[i]=0;
    }
    // n-> no of nodes
    // m-> no of edges
    int n, m; 
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;
    q.push(1);
    vis[1]=true;

    while(!q.empty()){
        int node= q.front();
        q.pop();
        cout<<node<<endl;

        vector<int> :: iterator it;
        for(it = adj[node].begin(); it != adj[node].end(); it++){
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it);
            }
        }
    }

    return 0;
}


