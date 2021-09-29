#include<bits/stdc++.h>
using namespace std;

const int N= 1e5+6;
vector<int> parent(N);
vector<int> sz(N);  //DSU using size

//creating a set
void make_set(int v){
    parent[v]=v;
    sz[v]=1;
}

//find_set returns parent
int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    return parent[v]= find_set(parent[v]);   //path compression
}

//union of set a and set b
void union_sets(int a, int b){
    a= find_set(a);
    b= find_set(b);
    if(a!=b){
        if(sz[a] < sz[b]){
            swap(a, b);
        }
        parent[b]=a;
        sz[a] += sz[b];
    }
}

int main(){
    for(int i=0; i<N; i++){
        make_set(i);
    }

    int n, m;   //n- no of vertices    m- no of edges
    cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0; i<m; i++){
        int u, v, w;    //w- weight
        cin>>u>>v>>w;
        edges.push_back({w,u,v});
    }
    //sort according to weight
    sort(edges.begin(), edges.end());

    int cost=0;
    for(auto i: edges){
        int w= i[0];
        int u= i[1];
        int v= i[2];
        int x= find_set(u);
        int y= find_set(v);
        if(x==y){
            continue; //because it lies in same set, if we include cycle will form, so we dont include
        }
        else{
            cout<<u<<" "<<v<<" "<<w<<endl;
            cost += w;
            union_sets(u, v);
        }
    }
    cout<<cost;

    

    return 0;
}
