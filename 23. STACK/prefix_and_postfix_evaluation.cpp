#include<iostream>
#include<stack>
#include<math.h>

using namespace std;

int prefixEvaluation(string s){

    stack <int> st;
    for(int i=s.length()-1; i>=0; i--){     //traversing from right to left
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}
int postfixEvaluation(string s){

    stack <int> st;
    for(int i=0; i<s.length(); i++){    //traversing from left to right
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op2=st.top();   //change is here
            st.pop();
            int op1=st.top();   //change is here
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}

int main(){

    cout<<prefixEvaluation("-+7*45+20")<<endl;
    cout<<postfixEvaluation("46+2/5*7+")<<endl;
    

    return 0;
}