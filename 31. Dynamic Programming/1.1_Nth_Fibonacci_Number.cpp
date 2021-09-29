//Tabulation - Bottom-up approach

#include<bits/stdc++.h>
using namespace std;
#define long long int
const int N=1e9+2, MOD= 1e9+7;
vector<int> dp;

int main(){
    int n; cin>>n;

    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;

    for(int i=3; i<=n; i++){
        dp[i]= dp[i-1] + dp[i-2];
    }

    cout<<dp[n]%MOD<<endl;


    return 0;
}