#include<iostream>
using namespace std;
#define n 6

class stack{
    private:
        int* arr;
        int top;
    public:
        stack(){
            arr=new int[n];
            top=-1;
        }

        bool isEmpty(){
            // if (top==-1){
            //     return true;
            // }
            // else{
            //     return false;
            // }

            return (top==-1);
        }

        bool isFull(){
            return (top==n-1);
        }

        void push(int val){
            if(isFull()){
                cout<<"Stack Overflow";
            }
            top++;
            arr[top]=val;
        }

        int pop(){
            if(isEmpty()){
                cout<<"Stack Underflow"<<endl;
                return 0;
            }

            int val=arr[top];
            top--;
            return val;
        }

        int count(){
            return top+1;
        }

        int peek(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
            }
            return arr[top];
        }

        void change(int pos, int val){
            arr[pos]=val;
            cout<<"Value changed at location "<<pos<<endl;
        }

        void display(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
            }
            for(int i=top; i>=0; i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){

    stack st;

    st.push(1);
    st.push(2);    
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    // st.push(7);
    st.display();

    cout<<"Count is: "<<st.count()<<endl;

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    st.display();

    cout<<"Peek element is: "<<st.peek()<<endl;

    st.change(3, 6);
    st.display();


    return 0;
}