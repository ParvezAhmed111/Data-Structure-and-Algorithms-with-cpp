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
    if (head==NULL){
        n->next=n;
        head=n;
        return;
    }
    
    node* temp= head;
    while(temp->next!=head){// check  
        temp=temp->next;
    }
    temp->next=n;
    n->next=head; //last node pointing to head node
    head=n;
}

//Insert at Tail
void insertAtTail(node* &head, int val){

    node* n= new node(val);

    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    node* temp= head;
    while(temp->next!=head){// check  
        temp=temp->next;
    }
    temp->next=n;
    n->next=head; //last node pointing to head node
}

//Traversing a Circular LL
void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;

}

//deleting a LL
//deleting first element
void deleteAtHead(node* &head){
    node* temp= head;
    while(temp->next!= head){
        temp=temp->next;
    }

    node* todelete= head;
    temp->next=head->next;
    head=head->next;

    delete todelete;
}

void deletion(node* &head, int pos){

    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp= head;
    int count=1;

    while(count!= pos-1){
        temp=temp->next;
        count++;
    }

    node* todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
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

    cout<<"After deleting last element: ";
    deletion(head, 5);
    display(head);

    cout<<"After deleting first element: ";
    deleteAtHead(head);
    display(head);

    cout<<"After deleting element at position no 2: ";
    deletion(head, 2);
    display(head);

   


    return 0;
}