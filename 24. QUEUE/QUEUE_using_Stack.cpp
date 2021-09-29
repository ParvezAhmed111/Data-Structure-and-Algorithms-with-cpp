#include<iostream>
#include<stack>
using namespace std;
class Queue{
    stack <int> s1;
    stack <int> s2;
    public:
        void enqueue(int x){
            s1.push(x);
        }

        int dequeue(){
            if(s1.empty() && s2.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }

            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }

            int topval= s2.top();
            s2.pop();
            return topval;
        }

        bool isEmpty(){
            if(s1.empty() && s2.empty()){
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
            
            return s2.top();
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