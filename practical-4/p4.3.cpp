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
    Node* head=new Node(101);
    Node* second=new Node(102);
    Node* third=new Node(103);
    Node* four= new Node(104);
    Node* five= new Node(105);

    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;


    Node*temp=head;


    //add 100 in front

    Node* oredre1=new Node(100);
    oredre1->next=head;
    head=oredre1;

    //add 106 at last

    Node* oredre2=new Node(106);
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=oredre2;
    oredre2=temp;

    temp=head;


    // add after first 999

    Node* oredre3=new Node(999);

    oredre3->next=head->next;
    head->next=oredre3;


    // add before last 888

    Node* oredre4= new Node(888);

    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    oredre4->next=temp->next;
    temp->next=oredre4;

    temp=head;



    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}