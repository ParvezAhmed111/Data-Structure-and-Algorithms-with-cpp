#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin>>a[i];

    //for ordered MAP
    map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }

    //print
    for(auto i: freq){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //another way to PRINT
    map<int, int> :: iterator it;
    for(it=freq.begin(); it!= freq.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    //for unordered MAP
    // unordered_map<int, int> freq;
    // for(int i=0; i<n; i++){
    //     freq[a[i]]++;
    // }
    // unordered_map<int, int> :: iterator it;
    // for(it=freq.begin(); it!= freq.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    return 0;
}