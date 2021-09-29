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

class queue{
    node* front;
    node* back;
    public:
        queue(){
            front=NULL;
            back=NULL;
        }

        bool isEmpty(){
            if(front==NULL){
                return true;
            }
            else{
                return false;
            }
        }

        void enqueue(int val){
            node* n= new node(val);
            if(front==NULL){
                front=back=n;
            }

            back->next=n;
            back=n;
        }

        void dequeue(){
            if(front==NULL){
                cout<<"Queue Underflow"<<endl;
                return;
            }

            node* todelete= front;
            front=front->next;
            delete todelete;
        }

        int peek(){
            if(front==NULL){
                cout<<"No element in queue"<<endl;
                return -1;
            }
            return front->data;
        }

        void display(){
            node* temp=front;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }

        int count(){
            node* temp=front;
            int l=0;
            while(temp!=NULL){
                l++;
                temp=temp->next;
            }
            return l;
        }
};

int main(){

    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    cout<<q.count()<<endl;

    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    cout<<q.peek()<<endl;

    return 0;
}

    