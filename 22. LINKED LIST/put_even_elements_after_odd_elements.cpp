//Time Complexity= O(m+n)

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

//Insert at head
void insertAtHead(node* &head, int val){
    
    node* n= new node(val);
    n->next= head;
    head=n;
}

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

//CODE
void evenAdterOdd(node* &head){

    node* odd= head;
    node* even=head->next;
    node* evenStart=even;

    while(odd->next!=NULL && even->next!=NULL){

        odd->next=even->next;
        odd=odd->next;

        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenStart;
    if(odd->next==NULL){
        even->next=NULL;
    }
}

int main(){
    node* head=NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    display(head);
    evenAdterOdd(head);
    display(head);

    
    return 0;
}