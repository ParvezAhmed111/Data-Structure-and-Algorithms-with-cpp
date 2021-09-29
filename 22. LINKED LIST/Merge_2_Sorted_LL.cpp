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
//ITERATIVE METHOD
node* merge(node* &head1, node* &head2){

    node* p1= head1;
    node* p2= head2;
    node* dummyNode= new node(-1);
    node* p3= dummyNode;

    while(p1 != NULL && p2 != NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dummyNode->next;
}

//RECURSIVE METHOD
node* mergeRecursive(node* &head1, node* &head2){

    //base case
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    node* result;
    if(head1->data < head2->data){
        result= head1;
        result->next=mergeRecursive(head1->next, head2);
    }
    else{
        result= head2;
        result->next= mergeRecursive(head1, head2->next);
    }

    return result;


}
int main(){
    node* head1=NULL;
    node* head2=NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    insertAtTail(head2, 2);
    insertAtTail(head2, 3);
    insertAtTail(head2, 6);
    display(head1);
    display(head2);

    cout<<"After Merging (Iterative Method): ";
    node* newHead1= merge(head1, head2);
    display(newHead1);

    // cout<<"After Merging (Recursive Method): ";
    // node* newHead2= mergeRecursive(head1, head2);
    // display(newHead2);


    return 0;
}