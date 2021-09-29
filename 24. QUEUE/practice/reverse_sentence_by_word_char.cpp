//reverse word by character
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+3, M=1e9+7;

void revSentence(string s){
    stack<char> st;

    for(int i=0; i<s.length(); i++){
        st.push(s[i]);
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    

}
    
int32_t main(){
    string s; cin>>s;
    getline(cin, s);
    revSentence(s);

    
    return 0;
}