#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+7, M=1e9+7;
int p= 31;
vector<int> powers(N);
    
int32_t main(){
    string s= "na";
    string t="apna collegena";
    int T= t.size(), S= s.size();
    
    powers[0]=1;
    for(int i=1; i<N; i++){
        powers[i]=(powers[i-1]*p) % M;
    }

    vector<int> h(T+1, 0);
    for(int i=0; i<T; i++){
        h[i+1]= (h[i] + (t[i] - 'a' + 1)*powers[i]) % M;
    }

    int h_s=0;
    for(int i=0; i<S; i++){
        h_s= (h_s+ (s[i]-'a'+1)*powers[i])% M;
    }
    for(int i=0; i+S-1 < T; i++){
        int cur_h= (h[i+S]-h[i] + M) % M;
        if(cur_h == (h_s * powers[i]) % M){
            cout<<"Found at index "<<i<<endl;
        }
    }

    
    return 0;
}