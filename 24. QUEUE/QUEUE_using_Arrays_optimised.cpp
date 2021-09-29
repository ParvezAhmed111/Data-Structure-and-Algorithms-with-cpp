// FRONT- head
// REAR- back

#include<iostream>
using namespace std;
#define n 20

class queue{
    int* arr;
    int front;
    int rear;

    public:
        queue(){
            arr=new int [n];
            front=-1;
            rear=-1;
        }

        bool isEmpty(){
            if(front==-1 || front>rear){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            if(rear==n-1){  //n is size of array arr
                return true;
            }
            else{
                return false;
            }
        }

        void enqueue(int val){
            if(isFull()){
                cout<<"Overflow"<<endl;
                return;
            }
            
            rear++;
            arr[rear]=val;

            if(front==-1){
                front++;
            }
        }

        int dequeue(){
            if(isEmpty()){
                cout<<"No element in Queue"<<endl;
            }
            int x=arr[front];
            front++;
            return x;
        }
        
        int count(){
            return(rear-front+1);
        }

        int peek(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }

            return arr[front];
        }

        void display(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            
            for(int i=front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
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

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    q.display();

    cout<<q.peek()<<endl;

    



    

    return 0;
}
