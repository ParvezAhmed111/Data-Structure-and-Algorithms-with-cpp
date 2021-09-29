#include<bits/stdc++.h>
using namespace std;

const int INF=1e9;
int main(){
    vector<vector<int>> graph=  {   {0, 5, INF, 10},
                                    {INF, 0, 3, INF},
                                    {INF, INF, 0, 1},
                                    {INF, INF, INF, 0},
                                };
    int n= graph.size();    //n= no of vertices; adjm is n x n
    vector<vector<int>> dist= graph;
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(dist[i][j] == INF){
                cout<<"INF ";
            }
            else cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }

    // distance between 1 3
    cout<<dist[1][3];

    

    return 0;
}

// Adjacenct matrix

// vector<vector<int>> adjm(n+1, vector<int> (n+1, 0));
// for(int i=0; i<n; i++){
//     int x, y;
//     cin>>x>>y;
//     //input edges
//     adjm[x][y]=1;
//     adjm[y][x]=1;
// }

// cout<<"Adjacenct matrix of above graph is given by: "<<endl;
// for(int i=1; i<n+1; i++){
//     for(int j=1; j<n+1; j++){
//         cout<<adjm[i][j]<<" ";
//     }cout<<endl;
// }