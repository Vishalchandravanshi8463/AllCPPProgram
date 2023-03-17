#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*class node
{
 public:
 int data;
 node* next;
};
void print(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main()
{
    node* head=NULL;
     node* first=NULL;
      node* second=NULL;

      head=new node();
      first=new node();
      second=new node();

      head->data=1;
      head->next=first;
      first->data=2;
      first->next=second;
      second->data=3;
      second->next=NULL;

      print(head);
    return 0;
}*/
class node
{
    public:
 int data;
 node* next;
 
 node(int data)
 {
     this->data=data;
     this->next=NULL;
 }
};
/*void insertathead(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}*/
void insertattail(node* &tail,int d)
{
    node *temp=new node(d);
    temp->next=temp;
    tail=temp;
}
void print(node *&head)
{
 node* temp=head;
 while(temp!=NULL)
 {
     cout<<temp->data<<" ";
     temp=temp->next;
 }cout<<"NULL"<<endl;
}

int main(){
  
    node* node1=new node(10);
      cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    node* head=node1;
    node* tail=node1;
      print(head);
      cout<<"  ___________________________________\n";
    
   // insertathead(head,122);
    //insertathead(head,15);
    insertattail(tail,122);
    insertattail(tail,15);
    print(head);
    /* node* node2=new node(112);
      cout<<node2->data<<endl;
    cout<<node2->next<<endl;
      node* node3=new node(24);
     cout<<node3->data<<endl;
    cout<<node3->next<<endl;*/
    return 0;
    }
