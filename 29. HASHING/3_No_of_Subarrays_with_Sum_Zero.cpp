//Count Number of Subarrays with Sum Zero

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    map<int, int> cnt;
    int prefSum =0;

    for(int i=0; i<n; i++){
        prefSum += a[i];
        cnt[prefSum]++;
    }

    int ans=0;
    for(auto i: cnt){
        int c = i.second;
        ans += (c*(c-1))/2; //important check

        if(i.first == 0){
            ans += i.second;
        }
    }

    cout<<ans;

    return 0;
}