#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, W; cin>>n>>W;
    vector<int> wt(n);
    vector<int> val(n);
    for(int i=0; i<n; i++) cin>>wt[i];
    for(int i=0; i<n; i++) cin>>val[i];

    vector<int> dp(W+1, 0);
    for(int j=0; j<=W; j++){
        for(int i=0; i<n; i++){
            if(j-wt[i]>=0)
                dp[j]= max(dp[j], val[i]+dp[j-wt[i]]);
        }
    }
    

    cout<<dp[W];

    return 0;
}