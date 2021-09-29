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
        // insertAtHead(head, val);
        head=n;
        return;
    }
    node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

//Searching 
bool search(node* head, int key){

    node* temp= head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
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

//deleting a LL
//deleting first element
void deleteAtHead(node* &head){
    node* todelete= head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head, int val){

    //if LL is empty
    if(head==NULL){
        return;
    }
    //if only one element is present
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }

    node* temp= head;
    while(temp->next->data != val){
        temp=temp->next;
    }

    node* todelete= temp->next;
    temp->next=temp->next->next;

    delete todelete;
}


int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);

    cout<<search(head, 3)<<endl;
    cout<<search(head, 5)<<endl;

    deleteAtHead(head);
    display(head);

    deletion(head, 3);
    display(head);
    


    return 0;
}