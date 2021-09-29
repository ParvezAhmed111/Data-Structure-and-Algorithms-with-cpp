#include<iostream>
using namespace std;

void subSeq(string s, string ans){
    
    //base case
    if (s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros= s.substr(1);

    subSeq(ros, ans);
    subSeq(ros, ans+ch);
    
}

int main(){
    
    subSeq("ABC","");
    cout<<endl;

    return 0;
}
