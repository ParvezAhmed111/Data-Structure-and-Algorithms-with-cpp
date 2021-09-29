#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

    node(int val){
        data= val;
        next= NULL;
        prev= NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n= new node(val);
    n->next= head;
    if(head!= NULL){
        head->prev=n;
    }
    head=n;
}

void insertAtTail(node* &head, int val){

    node* n= new node(val);

    if(head==NULL){
        insertAtHead(head, val);
        return;
    }

    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
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


void deleteAtHead(node* &head) {
 
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
 
    delete todelete;
}
 
void deletion(node* &head, int pos) {
 
    if (pos == 1) {
        deleteAtHead(head);
        return;
    }
 
    node* temp = head;
    int count = 1;
 
    while (temp != NULL && count != pos) {
        temp = temp->next;
        count++;
    }
 
    temp->prev->next = temp->next;
 
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
 
    delete temp;
 
}
 

int main(){

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 5);
    display(head);

    // cout<<search(head, 3)<<endl;
    // cout<<search(head, 5)<<endl;

    deleteAtHead(head);
    display(head);

    deletion(head, 3);
    display(head);
    


    return 0;
}