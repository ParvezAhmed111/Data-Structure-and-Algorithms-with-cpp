#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+3, M=1e9+7;
    
int fib(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    int first = 0;
    int second = 1;
    for(int i = 2; i <= n; i++){
        int temp = first + second;
            first = second;
            second = temp;
    }
    return second%M;
}
int32_t main(){
    int n; cin>>n;
    cout<<fib(n);
}