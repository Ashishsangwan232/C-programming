#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

void printlist(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

Node *createlistfromarray(int arr[], int n)
{
    if (n == 0)
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *tail = head;
    for (int i = 1; i < n; i++)
    {
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }
    return head;
};

Node *insertstart(Node *head, int val)
{
    Node *newhead = new Node(val);
    newhead->next = head;
    return newhead;
}

Node *InsertLast(Node *head, int val)
{
    Node *newNode = new Node(val);

    if (head == nullptr)
        return newNode;

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}

Node *Insertatpos(Node *head, int val, int pos)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
        return newNode;

    if (pos == 1)
    {
        newNode->next = head;
        return newNode;
    }
    int count = 1;
    Node *temp = head;

    while (temp!=nullptr && count < pos-1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        cout << "Position out of range!" << endl;
        delete newNode;
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}


Node* reverselist(Node* head){
    Node* prev=nullptr;
    Node* curr=head;

    while(curr!=nullptr){
        head=curr->next;
        curr->next=prev;
        prev=curr;
        curr=head;
    }

    return prev;
}
int sizeofNode(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=nullptr){
        temp=temp->next;
        count++;
    }
    return count;
}

Node* reversegroup(Node* head,int k){
    int size=sizeofNode(head);
    int group=size/k;
    int s=0;
    int count=0;
    Node* ans=nullptr;
    Node* curr=head;
    Node* next=nullptr;
    Node* last=head;

    for(int i=0;i<group;i++){
        s=s+k;
        // cout<<"s: "<<s<<endl;
        Node* prev=nullptr;
        while(count<s){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }

        
        if(i==0){
            ans=prev;
        }
        
        Node* prevlast=last;
        while(last->next!=nullptr){
            last=last->next;
        }
        // cout<<"prev "<<i<<": "<<prev->next<<endl;
        // cout<<"prevlast "<<i<<": "<<prevlast->next<<endl;
        // cout<<"last "<<i<<": "<<last->data<<endl;

        // if(prevlast==prev){
        //     prevlast->next=prev;  
        //     while(last!=nullptr){
        //         last=last->next;
        //     }
        // }
        prevlast->next=prev;

        last->next=curr;

        // cout<<"i: "<<i<<" "<<endl;
        // printlist(ans);

    }

    if(curr!=nullptr){
        last->next=curr;
    } 

    // cout<<"ans: "<<ans->data<<endl;
    
    return ans;

}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    Node *head = createlistfromarray(arr, 5);


    // cout<<5/3  ;
    // cout << "Original List" << endl;
    // printlist(head);

    // Node* starthead = insertstart(head, 100);
    // cout<<"modified List at start"<<endl;
    // printlist(msthead);

    // Node *endhead = InsertLast(head, 200);
    // cout << "modified List at end" << endl;
    // printlist(endhead);

    // Node *poshead = Insertatpos(head, 300, 2);
    // cout << "modified List at pos" << endl;
    // printlist(poshead);


    // Node *revhead = reverselist(head);
    // cout << "modified List (reversed)" << endl;
    // printlist(revhead);
    
    
    // reverse Nodes in k-group
    int k=3;
    Node *revgroup = reversegroup(head,k);
    cout << "modified List (reversed)" << endl;
    printlist(revgroup);
    
}