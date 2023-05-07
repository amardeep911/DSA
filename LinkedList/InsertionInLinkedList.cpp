#include <iostream>
#include <stdio.h>
using namespace std;
    
    class Node{
        public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next= NULL;
        }
    };

 
    void insertOne(Node* &head,int Data){
        Node*temp = new Node(Data);
        temp ->next = head;
        head = temp;

    };
    void insertAtTail(Node* &tail, int Data){
        Node*temp = new Node(Data);
        tail -> next = temp;
        tail = temp;
    }
    void printlist(Node* &head){
        Node*temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;

    };
       void insertAtPos(Node* &tail, Node* &head, int position, int data){
        if(position == 1){
            insertOne(head, data);
            return;
        }
        Node*temp = head;
        int count = 1;
        if(position == 1){
            insertOne(head, data);
        }
        while(count < position-1){
            temp = temp->next;
            count++;
        }

        if(temp -> next == NULL){
            insertAtTail(tail,data);
            return;
        }
        Node* nodetoinsert = new Node(data);
        nodetoinsert -> next = temp -> next;
        temp -> next = nodetoinsert;
    }

    int main(){
        Node* node1 = new Node(10);
        Node*head = node1;

        Node*tail = node1;
        insertAtTail(tail, 12);
        insertAtTail(tail, 15);
        insertAtPos(tail, head, 4, 22);
        printlist(head);
        cout<<"head is "<<head->data<<endl;
        cout<<"tail is "<<tail->data<<endl;

    }
