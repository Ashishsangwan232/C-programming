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

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    Node *head = createlistfromarray(arr, 5);

    cout << "Original List" << endl;
    printlist(head);

    // Node* starthead = insertstart(head, 100);
    // cout<<"modified List at start"<<endl;
    // printlist(msthead);

    // Node *endhead = InsertLast(head, 200);
    // cout << "modified List at end" << endl;
    // printlist(endhead);

    Node *poshead = Insertatpos(head, 300, 2);
    cout << "modified List at pos" << endl;
    printlist(poshead);
}