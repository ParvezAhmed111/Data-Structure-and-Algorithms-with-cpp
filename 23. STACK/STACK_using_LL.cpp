#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data=val;
            next=NULL;
        }
};

class Stack{
    node* top;
    public:
        Stack(){
            top=NULL;
        }

        void push(int x){
            node* n= new node(x);
            if(top==NULL){
                top=n;
            }
            n->next=top;
            top=n;
        }

        int pop(){
            if(top==NULL){
                cout<<"Stack is Empty"<<endl;
                return -1;
            }
            int tempData=top->data;
            node* temp=top;
            top=top->next;
            delete temp;
            return tempData;
        }

};


int main(){
    

    return 0;
}