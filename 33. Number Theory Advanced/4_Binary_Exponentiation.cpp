#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N= 1e5+2, MOD=1e9+7;

//Iterative Version
int powerIterative(int a, int n){
    a%=MOD;
    int ans=1;
    while(n>0){
        if(n&1) ans= (ans*a) % MOD;
        a= (a*a) % MOD;
        n = n>>1;
    }
    return ans;
}

int powerRecursive(int a, int n){
    if(n==0) return 1;
    int p= (powerRecursive(a, n/2) % MOD);

    if(n&1) return (((p*p)%MOD)*a)%MOD;
    else return (p*p) %MOD;
}

signed main(){
    int a, n;
    cin>>a>>n;
    a%=MOD;

    cout<<powerIterative(a,n)<<endl;
    cout<<powerRecursive(a,n)<<endl;

    return 0;
}