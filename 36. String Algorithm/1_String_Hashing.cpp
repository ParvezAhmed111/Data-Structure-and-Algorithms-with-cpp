//Find the numbwr of unique strings

#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+3, M=1e9+7;
int p=31;
vector<int> powers(N);

int calculate_hash(string s){
    int hash=0;
    for(int i=0; i<s.size(); i++){
        hash += ((s[i] - 'a' + 1)* powers[i]) % M;
    }
    return hash;
}
int32_t main(){
    powers[0]=1;
    for(int i=1; i<N; i++){
        powers[i] = (powers[i-1] * p)%M;
    }
    vector<string> str={"aa", "ab", "aa", "b", "cc", "aa"};
    vector<int> hashes;
    for(auto w: str){
        hashes.push_back(calculate_hash(w));
    }
    //TC: O(nm)
    sort(hashes.begin(), hashes.end());
    //TC: O(n log(n))
    //Final TC: O(nm + nlog(n))
    int dist = 0;
    for(int i=0; i<hashes.size(); i++){
        if(i == 0 or hashes[i] != hashes[i-1]){
            dist++;
        }
    }
    cout<<dist<<endl;
    

    return 0;
}


// int32_t main(){
//     vector<string> str={"aa", "ab", "aa", "b", "cc", "aa"};
//     sort(str.begin(), str.end()); //O(nm log(n))    n- size of string   m- string comparision  
//     int dist = 0;
//     for(int i=0; i<str.size(); i++){
//         if(i == 0 or str[i] != str[i-1]){
//             dist++;
//         }
//     }
//     cout<<dist<<endl;

//     return 0;
// }