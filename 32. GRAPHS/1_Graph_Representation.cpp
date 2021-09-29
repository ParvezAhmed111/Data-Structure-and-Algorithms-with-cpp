#include<bits/stdc++.h>
using namespace std;

const int N= 1e5+2, MOD= 1e9+7;
//globally declare adjacence list
vector<int> adj[N];

int main(){
    int n, m;
    cin>>n>>m;

    //Adjacency Matrix -> 2d vector (n+1) x (n+1), and initialize with 0 (as there is no edge present)
    vector<vector<int>> adjm(n+1, vector<int> (n+1, 0));
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        //input edges
        adjm[x][y]=1;
        adjm[y][x]=1;
    }

    cout<<"Adjacenct matrix of above graph is given by: "<<endl;
    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            cout<<adjm[i][j]<<" ";
        }cout<<endl;
    }

    if(adjm[3][7] == 1){
        cout<<"There is a edge between 3 and 7"<<endl;
    }
    else{
        cout<<"No edge"<<endl;
    }

    //ADJACENCY LIST
    int n1, m1;
    cin>>n1>>m1;

    for(int i=0; i<n1; i++){
        int x, y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<"Adjacenct matrix of above graph is given by: "<<endl;

    for(int i=1; i<n1+1; i++){
        cout<<i<<"->";
        for(auto x : adj[i]){
            cout<<x<<" ";
        }cout<<endl;
    }

    // for(int i=1; i<n1+1; i++){
    //     cout<<i<<"->";
    //     vector<int> :: iterator it;
    //     for(it = adj[i].begin(); it!=adj[i].end(); it++){
    //         cout<<*it<<" ";
    //     }cout<<endl;
    // }
     
    return 0;
}