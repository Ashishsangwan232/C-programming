#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node (int d){
        data=d;
        next =nullptr;
    }
};

Node *createlist(int arr[], int n){
    Node* head=new Node(arr[0]);
    Node* tail=head;

    for(int i=1;i<n;i++){
        tail->next=new Node(arr[i]);
        tail=tail->next;
    }

    tail->next=head;

    return head;
}


void printlist(Node* head){

    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<temp->data<<" ";
    
}
Node* insertstart(Node* head,int val){
    
    Node* newNode=new Node(val);
    Node* temp=head;
    do{
        temp=temp->next;
    }while(temp->next!=head);
    
    newNode->next=head;

    temp->next=newNode;

    head=newNode;

    return head;
}


Node* deletestart(Node* head){
    Node* temp=head;
    do{
        temp=temp->next;

    }while(temp!=head);

    temp->next=head->next;

    return head;
}

int main(){
    int arr[]={10,20,30,40,50,60};
    Node* head=createlist(arr,6);
    printlist(head);
    cout<<endl;
    
    Node* newhead=insertstart(head,100);
    cout<<"Modified"<<endl;
    printlist(newhead);

    cout<<endl;
    newhead=deletestart(head);
    cout<<"Modified"<<endl;
    printlist(newhead);
    
    return 0;
    
}