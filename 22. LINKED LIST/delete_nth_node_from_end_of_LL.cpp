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
    int length(node* &head){
      int l=0;
      node* temp=head;
      while(temp!=NULL){
        l++;
        temp=temp->next;
      }
      return l;
    }
    node* deleteNode(node*&head,int key) 
    { 
      node* temp=head;
      int count=0;
      int l= length(head);
      if(key==l){
        node* todelete= head;
        head=head->next;
        delete todelete;
      }
      else if(key>l){
        return head;
      }
      else{
        while(temp!=NULL && count!=(l-key-1)){
        temp=temp->next;
        count++;
        }
        node* todelete= temp->next;
        temp->next=temp->next->next;

        delete todelete;
      }     
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
  node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
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