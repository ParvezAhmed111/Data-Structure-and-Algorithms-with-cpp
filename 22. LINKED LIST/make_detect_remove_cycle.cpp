/*
Hare and Tortoise Algorithm-- to detect a cycle
Floyd Algorithm-------------- to remove a cycle
*/

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

//Make a CYCLE at k-th position
void makeCycle(node* &head, int pos){
    node* temp= head;
    node* startNode;
    int count= 1;
    // // traverse the linked list until loop point not found 
    // while(count<pos){
    //     temp=temp->next;
    //     count++;
    // }
    // // backup the startNode
    // startNode=temp;
    // // traverse remaining nodes 
    // while(temp->next != NULL){
    //     temp=temp->next;
    // }
    // // joint the last node to k-th element
    // temp->next=startNode;


    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}


//DETECT a cycle - Hare and Tortoise Algorithm
bool detectCycle(node* &head){
    if(head==NULL || head->next==NULL) return false;
    node* fast= head;
    node* slow= head;

    while(fast!= NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

//REMOVE a cycle- Floyd Algorithm
void removeCycle(node* &head){
    node* fast= head;
    node* slow= head;

    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    
    fast= head;
    while(slow->next != fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}


int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);

    cout<<"Original LL: ";
    display(head);

    cout<<"\nAfter making cycle ";
    makeCycle(head, 3);
    // display(head);  //it will print infinite loop

    cout<<"\nCycle present(1)/ Cycle not present(0): ";
    cout<<detectCycle(head);

    cout<<"\nAfter removing cycle";
    removeCycle(head);

    cout<<"\nCycle present(1)/ Cycle not present(0): ";
    cout<<detectCycle(head)<<endl;
    display(head);

    

    return 0;
}