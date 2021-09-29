// Activity Selection Problem

#include<bits/stdc++.h>
using namespace std;

bool sortend(vector<int> &a, vector<int> &b){
    return a[1]<b[1];
}

int main(){
    int n; cin>>n;
    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        int start, end;
        cin>>start>>end;
        v.push_back({start, end});
    }

    sort(v.begin(), v.end(), sortend);

    // for(auto i: v){
    //     for(auto j: i){
    //         cout<<j<<" ";
    //     }cout<<endl;
    // }

    // sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b){
    //     return a[1] < b[1];
    // });

    int take=1;
    int end=v[0][1]; //ending time of 1st activity

    for(int i=1; i<n; i++){
        if(v[i][0] >= end){ //v[i][0] starting time of current activities
            take++;
            end=v[i][1];    //ending time modified to new ending time of selected activity
        }
    }

    cout<<take<<endl;



    return 0;
}