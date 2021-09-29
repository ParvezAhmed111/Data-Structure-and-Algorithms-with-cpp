// ALGORITHM

// 1)Take two pointers, first will point to the head of the linked list and second will point to the Nth node from the beginning.
// 2)Now keep increment both the pointers by one at the same time until second is pointing to the last node of the linked list.
// 3)After the operations from the previous step, first pointer should be pointing to the Nth node from the end by now. So, delete the node first pointer is pointing to.

 
#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node*next;
  node(int d)
  {
    data=d;
    next=NULL;
  }

};
    node* deleteNode(node*&head,int key) 
    { 
        node *first = head; 
        node *second = head; 
        for (int i = 0; i < key; i++) 
        {
            if (second->next == NULL)  
            { 
                if (i == key - 1) 
                    head = head->next; 
                return head; 
            } 
            second = second->next; 
        } 
        while (second->next != NULL) 
        { 
            first = first->next; 
            second = second->next; 
        } 
        first->next = first->next->next; 
        return head; 
    }
void inserttail(node*&head,int data)
{
  if(head==NULL)
  {
    head=new node(data);
    return;
  }
  node*temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  node*n=new node(data);
  temp->next=n;
  return;
}
void print(node*head)
{
  node*temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
int main() {
  node*head=NULL;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int temp;
    cin>>temp;
    inserttail(head,temp);
  }
 int key;
 cin>>key;
 head=deleteNode(head,key);
  print(head);
    return 0;
}