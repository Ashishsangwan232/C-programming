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

Node *deletestart(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *deleteLast(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty!" << endl;
        return nullptr;
    }

    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }

    Node *temp = head;

    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

    return head;
}

Node *deleteatpos(Node *head, int pos)
{

    if (pos == 1)
    {
        head = deletestart(head);
        return head;
    }

    Node *temp = head;
    int count = 1;

    while (temp != nullptr && count < pos-1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr || temp->next == nullptr)
        return head;

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;

    return head;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    Node *head = createlistfromarray(arr, 5);

    cout << "Original List" << endl;
    printlist(head);

    // Node* starthead = deletestart(head);
    // cout<<"modified List at start"<<endl;
    // printlist(starthead);

    // Node *endhead = deleteLast(head);
    // cout << "modified List at end" << endl;
    // printlist(endhead);

    Node *poshead = deleteatpos(head, 10);
    cout << "modified List at pos" << endl;
    printlist(poshead);
}