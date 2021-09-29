//Find the numbwr of unique strings

#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=1e5+3, M=1e9+7;

int32_t main(){
    string s = "na";
    string t = "apna collegena";
    int S= s.size(), T=t.size();
    for(int i=0; i<T-S+1; i++){
        if(t.substr(i,S) == s){
            cout<<"Found at index "<<i<<endl;
        }
    }
    //Time Complexity: O(ST)
    

    return 0;
}