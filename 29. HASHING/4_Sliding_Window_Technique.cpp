//Sliding Window Technique

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int currSum=0, ans=INT_MAX;

    for(int i=0; i<k; i++){
        currSum += k;
    }
    // cout<<currSum<<" ";
    ans= min(ans, currSum);

    for(int i=k; i<n; i++){
        currSum -= a[i-k];
        currSum += a[i];
        ans= min(ans, currSum);
        // cout<<currSum<<" ";
    }
    // cout<<endl;
    cout<<ans<<endl;
    

    return 0;
}