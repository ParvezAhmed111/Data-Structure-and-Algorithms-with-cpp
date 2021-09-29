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

//recursive method
node* reverseK(node* &head, int k){

    node* prevptr= NULL;
    node* currptr= head;
    node* nextptr;

    int count=0;

    while(currptr != NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr= currptr;
        currptr= nextptr;

        count++;
    }

    if( nextptr != NULL){
        head->next=reverseK(nextptr, k);
    }
    return prevptr;
}


int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    cout<<"Original LL: ";
    display(head);

    int k=2 ;

    node* newhead= reverseK(head, k);
    cout<<"Reversed k nodes: ";
    display(newhead);

    return 0;
}