#include<bits/stdc++.h>
using namespace std;

vector<bool> vis;
int n, m;
vector<vector<int>> adj;
vector<int> components;

int get_comp(int idx){
    if(vis[idx])
        return 0;
    vis[idx]= true;
    int ans= 1;

    for(auto i: adj[idx]){
        if(!vis[i]){
            ans += get_comp(i);
            vis[i] = true;
        }
    }
    return ans;
}

int main(){
    cin>>n>>m;  //n-> no of nodes   m->no of edges

    adj= vector<vector<int>> (n);
    vis= vector<bool> (n);

    for(int i=0; i<n; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<n; i++){
        if(!vis[i]){
            components.push_back(get_comp(i));
        }
    }

    // for(auto i: components){
    //     cout<<i<<" ";
    // } 

    long long ans= 0;
    for(auto i: components){
        ans += i*(n-i);
    }

    cout<<(ans/2);
    
    return 0;
}

/*
component - 0 1 4     2 3
0 2
0 3 
1 2
1 3
4 2
4 3

*/