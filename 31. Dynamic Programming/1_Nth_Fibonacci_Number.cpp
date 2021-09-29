//Memoization - Top-down approach

#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=1e8+2, MOD= 1e9+7;
int dp[N];

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;

    if(dp[n] != -1) return dp[n];

    dp[n]= fib(n-1) + fib(n-2);

    return dp[n]%MOD;

}

int32_t main(){
    int n; cin>>n;

    for(int i=0; i<N; i++){
        dp[i]=-1;
    }
    cout<<fib(n)<<endl;
    return 0;
}