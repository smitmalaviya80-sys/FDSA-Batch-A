#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

int main(){
 Node* head=new Node(1);
 Node* second= new Node(2);
 Node* third= new Node(3);
 Node* four= new Node(4);


 head->next=second;
 second->next=third;
 third->next=four;
//  here i want insert at front
// creat nwe note and then insert at front
// Node* newnode =new Node(100);
// newnode->next=head;
// head=newnode;

 Node* temp=head;

//  while(temp->next!=NULL){
    
//     temp=temp->next;
//  }

//  Node* newnode= new Node(50);

//  temp->next=newnode;
//  newnode=temp;

//  temp=head;


//  while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//  }
// 
    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    Node* newnode=new Node(999);

    newnode->next=temp->next;
    temp->next=newnode;
    temp=head;
    
while(temp!=NULL){
     cout<<temp->data<<" ";
     temp=temp->next;
  }


}