#include<iostream>
#include<stack>
using namespace std;
class Queue{
    stack <int> s;
    public:
        void enqueue(int x){
            s.push(x);
        }

        int dequeue(){
            if(s.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }

            int x=s.top();
            s.pop();
            if(s.empty()){
                return x;
            }
            int item=dequeue();
            s.push(x);
            return item;
        }

        bool isEmpty(){
            if(s.empty()){
                return true;
            }
            else{
                return false;
            }
        }

        int peek(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return -1; 
            }
            
            return s.top();
        }

        // void display(){
        //     if(isEmpty()){
        //         cout<<"Queue is empty"<<endl;
        //         return;
        //     }
            
        //     for(int i=0; i<s2.size(); i++){
        //         cout<<s2.top()<<" ";
        //         s2.pop();
        //     }
        //     cout<<endl;
        // }
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);

    // q.display();

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    // q.display();

    cout<<q.peek()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    

    return 0;
}