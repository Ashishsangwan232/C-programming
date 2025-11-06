#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int d){
            this->data=d;
            this->next=nullptr;
            this->prev=nullptr;
        }
};

void printlist(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->data;
    }
}

Node* insertstart(Node* head,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        return newNode;
    }
    newNode->next=head;
    head->prev=newNode;
    head=head->prev;

    return head;

}
int main(){
    Node* head=new Node(10);
    Node* N1=new Node(20);
    Node* N2=new Node(30);
    Node* N3=new Node(40);

    head->next=N1;
    N1->prev=head;
    N1->next=N2;
    N2->prev=N1;
    N2->next=N3;
    N3->prev=N2;

    Node* org=insertstart(head,100);
    cout<<"list"<<endl;
    printlist(org);    

}