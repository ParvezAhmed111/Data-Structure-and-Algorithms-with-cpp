#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val){
        data=val;
        next=NULL;
    }
};

//Insert at Tail
void insertAtTail(node* &head, int val){

    node* n= new node(val);

    if(head==NULL){
        // insertAtHead(head, n->data);
        head=n;
        return;
    }
    node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

//Traversing a LL
void display(node* head){
    node* temp=head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

//iterative method
void reverse(node* &head){
    node* prevptr= NULL;
    node* currptr= head;
    node* nextptr;

    while(currptr != 0){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    head=prevptr;   
}

//recursive method
// node* reverseRecursive(node* &head){

//     //base case
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     node* newhead= reverseRecursive(head->next);
//     head->next->next=head;
//     head->next=NULL;

//     return newhead;
// }

//recursive method 2
void reverseRecursive1(node* &head){
    //base case
    if(head==NULL){
        return;
    }
    reverseRecursive1(head->next);
    cout<<head->data<<"->";
}


int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    cout<<"Original LL: ";
    display(head);

    // reverse(head);

    // node* newhead= reverseRecursive(head);
    cout<<"Reversed LL: ";

    // display(newhead);
    reverseRecursive1(head);

    return 0;
}