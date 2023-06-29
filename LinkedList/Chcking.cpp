#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        };
        cout << "Delete node is " << value << endl;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
};
void insertAtTail(Node *&tail, int Data)
{
    Node *temp = new Node(Data);
    tail->next = temp;
    tail = temp;
}
void printLinkedList(Node *&Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};

void deleteNodeAtPos(Node *&head, int pos)
{

    if (pos == 1)
    {
        Node*temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {

        Node *curr = head;
        Node *prev = NULL;
        int count = 1;

        while (count < pos)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void insertAtPos(Node *&head, Node *&tail, int data, int pos)
{
    Node *temp = head;
    int count = 1;

    if (pos == 1)
    {
        insertAtHead(head, data);
    }
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *tobeinserted = new Node(data);
    tobeinserted->next = temp->next;
    temp->next = tobeinserted;
}

int main(int argc, char const *argv[])
{
    Node *head = new Node(10);
    Node *tail = head;

    insertAtHead(head, 5);
    insertAtHead(head, 10);
    insertAtTail(tail, 2);

    insertAtPos(head, tail, 18, 5);
    
    printLinkedList(head);
    deleteNodeAtPos(head, 5);
    printLinkedList(head);
}