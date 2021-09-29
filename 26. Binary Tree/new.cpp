#include<bits/stdc++.h>
using namespace std;

int smallestdiv(int n){
    
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}
int solve(vector<int> &A) {
    int Min=INT_MAX;
    int Max=INT_MIN;
    int small;
    for(int i=0; i<A.size(); i++){
        small = smallestdiv(A[i]);
        Min=min(small, Min);
        Max=max(small, Max);
        // cout<<smallestdiv(A[i])<<endl;
    }
    
    int x=Max-Min;
    return x;
}

int main(){
    int n; cin>>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        A.push_back(ele);
    }
    cout<<solve(A);
}