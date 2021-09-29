//Time Complexity= O(n)

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
int length(node* head){
    int l=0;
    node* temp=head;
    while(temp != NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* kappend(node* &head, int k){
    node* newHead;
    node* newTail;
    node* tail= head;

    int l= length(head);
    int count=1;

    while(tail->next != NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }

    newTail->next=NULL;
    tail->next=head;

    return newHead;
}

int main(){
    node* head=NULL;

    int arr[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        insertAtTail(head, arr[i]);
    }
    display(head);
    node* newhead= kappend(head, 3);
    display(newhead);
}