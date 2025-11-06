#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    Node(int d){
        data=d;
        next=nullptr;
        prev=nullptr;
    }
};

void printlist(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* insertstart(Node* head,int n){
    Node * newNode=new Node(n);
    if(head==NULL){
        return newNode;
    }

    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    // delete newNode;
    return head;
}


Node* insertlast(Node* head,Node* &tail,int n){
    Node* newNode=new Node(n);
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return newNode;
    }
    
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
    return head;
    
}
Node* insertpos(Node* head,Node* tail,int n,int pos){
    if(pos==1){
        return insertstart(head,n);
    }
    Node* newNode=new Node(n);
    Node* temp=head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    temp->next=newNode;
    temp->next->prev=newNode;
    
    return head;
}
Node* createlist(int arr[],int size){
    if(size==0){
        return nullptr;
    }
    Node* head=new Node(arr[0]);
    Node *tail=head;
    for(int i=1;i<size;i++){
        Node* newNode=new Node(arr[i]);
        tail->next=newNode;
        newNode->prev = tail;
        tail=tail->next;
    }

    return head;

}
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    Node* head=createlist(arr,5);
    
    Node* tail = head;
    
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    cout<<"original"<<endl;
    printlist(head);

    head=insertstart(head,100);
    cout<<"Modified"<<endl;
    printlist(head);
    
    head=insertlast(head,tail,200);
    cout<<"Modified"<<endl;
    printlist(head);
    
    head=insertlast(head,tail,500);
    cout<<"Modified"<<endl;
    printlist(head);
    
    head=insertstart(head,600);
    cout<<"Modified"<<endl;
    printlist(head);
    
    head=insertpos(head,tail,900,5);
    cout<<"Modified"<<endl;
    printlist(head);
    
}