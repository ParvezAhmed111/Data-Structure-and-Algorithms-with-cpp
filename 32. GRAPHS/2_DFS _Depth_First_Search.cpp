#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2; 
bool vis[N]; //visited array
vector<int> adj[N]; //adjacency list

void dfs(int node){
    //preorder
    vis[node]=1;
    // cout<<node<<" ";


    //inorder
    vector<int> :: iterator it;

    for(it=adj[node].begin(); it!=adj[node].end(); it++){
        if(vis[*it]);
        else{
            dfs(*it);
        }
    }

    //postorder
    cout<<node<<" ";


}

int main(){
    // n-> no of nodes
    // m-> no of edges
    int n, m; 
    cin>>n>>m;

    for(int i=0; i<=n; i++){
        vis[i]=false;
    }

    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);

    return 0;
}


