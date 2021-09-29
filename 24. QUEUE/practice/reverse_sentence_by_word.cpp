#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+3, M=1e9+7;

void revSentence(string s){
    stack<string> st;

    for(int i=0; i<s.length(); i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+= s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    

}
    
int32_t main(){
    string s; cin>>s;
    getline(cin, s);
    revSentence(s);

    
    return 0;
}