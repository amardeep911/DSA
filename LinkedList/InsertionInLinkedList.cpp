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
        ~Node(){
            int value = this->data;
            if(this->next !=NULL){
                this-> next = NULL;
                delete next;
                
            }
            cout<<"Memory is free from heap "<<value<<endl;
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
    void deleteNode(Node* &head,int position){
        if(position == 1){
            Node*temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            Node*current = head;
            Node*prev = NULL;
            int count = 1;
            while(count<  position){
                prev = current;
                current = current-> next;
                count++;
            }
            prev -> next = current->next;
            current-> next = NULL;
            delete current;
        }
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
        deleteNode(head, 4);
        printlist(head);
        cout<<"head is "<<head->data<<endl;
        cout<<"tail is "<<tail->data<<endl;
        cout<<"Tail is coming zero we have to fix that"<<endl;
    }
