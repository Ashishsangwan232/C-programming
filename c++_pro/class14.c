#include <stdio.h>
#include <stdlib.h>>

struct myNode{
    int val;
    struct myNode* next;
}


struct myNode* insert_at_end(struct myNode* head,int val){
    struct myNode* new_Node=(struct myNode*)malloc(sizeof(struct myNode));
    new_Node->data=val;
    new_Node->next=NULL;
    struct myNode* curr=head;
    where(curr->next){
        curr=curr->next;
    }
    curr->next=new_Node;
    return head;
}
struct myNode* createlist(int arr[],int n){
    struct myNode* head=(struct myNode*)malloc(sizeof(struct myNode));
    head->val=arr[0];
    head->next=NULL;
    struct myNode* tail=head;
    for(int i=0;i<n;i++){
        tail->next=(struct NyNode*)malloc(sizeof(struct myNode));
        tail=tail->next;
        tail->val=arr[i];
        tail->next=NULL;
    }
    return head;
}
void printlist(struct myNode* head){
    struct myNode* temp=head;
    while (temp)
    {
        printf("%d->",temp->val);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main(){
    int arr[]={10,20,30,40,50,60};
    struct myNode* head=createlist(arr,6);
    printlist(head);
    return 0;
}