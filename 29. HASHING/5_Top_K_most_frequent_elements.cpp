//Top K most frequent elements

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    map<int, int> freq;
    for(int i=0; i<n; i++){
        int presentSize = freq.size();
        if(freq[a[i]] == 0 && presentSize == k){
            break;
        }
        freq[a[i]]++;
    }

    vector<pair<int, int>> ans;
    for(auto i: freq){
        if(i.second != 0){
            ans.push_back(make_pair(i.first, i.second));
        }
    }

    sort(ans.begin(), ans.end(), greater<pair<int, int>>());

    for(auto i: ans){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}