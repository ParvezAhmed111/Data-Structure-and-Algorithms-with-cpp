#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> A{0,2,5,7};
    sort(A.begin(), A.end());
    // for(auto i: A){
    //     cout<<i<<" ";
    // }
    int Min=INT_MAX;
    int ans;
    for(int i=0; i<A.size()-1; i++){
        ans=A[i]^A[i-1];
        Min=min(ans, Min);
    }
    cout<< Min;


    return 0;
}