#include <iostream>
#include <stdio.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node*&head,Node* &tail, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
else{

   Node* temp = new Node(data);
   temp->next = head;
   head->prev = temp;
   head = temp;
}
}
void insertAtTail(Node* &head,Node* &tail, int data){

    if(tail == NULL){
        Node*temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{

    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}
void printLinkedList(Node* &head){
    Node*temp = head;

    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    };
    cout<<endl;
    

}

void getLength(Node* &head){
    Node* temp = head;
    int count = 1;
    while(temp-> next!= NULL){
        count++;
        temp = temp->next;
    }

    cout<<"lenght is "<<count;
}

void insertAtAnyPos(Node* &head,Node* tail,int data, int pos){
    if(pos==1){
        insertAtHead(head, tail, data);
        return;
    }
    
    
        Node*temp = head;
        int count = 1;
        while(count < pos -1){
            temp = temp->next;
            count++;
        }
        if(temp->next == NULL){
            insertAtTail(head,tail,data);
        }
        Node* tobeInserted = new Node(data);
        tobeInserted->next = temp->next;
        temp->next->prev = tobeInserted;
        temp->next = tobeInserted;
        tobeInserted->prev = temp;

    
}

int main(int argc, char const *argv[])
{
    Node*head = new Node(10);
    Node *tail = head;
    insertAtHead(head,tail,12);
    printLinkedList(head);
    insertAtAnyPos(head,tail,2 ,18);
    printLinkedList(head);
    return 0;
}
