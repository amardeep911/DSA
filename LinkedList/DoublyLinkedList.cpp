#include <iostream>
#include <stdio.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
    this->data = data;
    this->prev = NULL;
    this -> next = NULL;
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
void insertathead(Node* &head,Node * &tail,  int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
           Node*temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp; 
    }
 ;
}
void insertattail(Node* &tail,Node* &head, int data){
        if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
        }
    else {
         Node*temp = new Node(data);
    tail->next = temp;
    temp -> prev = tail;
    tail = temp;
    }
   
}
int getLength(Node* &head){
    int count = 0;
    Node*temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void printList(Node* &head){
    Node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertatpost(Node* &head, Node* &tail, int position, int data){
    // insert at head
        if(position == 1){
            insertathead(head,tail, data);
            return;
        }

        Node*temp = head;
        int count = 1;
        while(count<position-1){
            temp  = temp->next;
            count++;
        }
        // insert at last position
        if(temp->next == NULL){
            insertattail(tail, head, data);
        }
        //insert at middle;
        Node* nodetoinsert = new Node(data);
        nodetoinsert->next = temp->next;
        temp->next->prev = nodetoinsert;
        temp->next = nodetoinsert;
        nodetoinsert ->prev = temp;
}
void deleteNode(Node* &head,int position){
        if(position == 1){
            Node* temp = head;
            temp->next->prev = NULL;
            head = temp-> next;
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
            current->prev = NULL;
            prev->next = current->next;
            current->next = NULL;
            delete current;
            
        }
    };

int main()
{
    
    Node* node1 = new Node(10);
    Node*head = NULL;
    Node*tail = NULL;
    insertathead(head,tail, 12);
    insertathead(head,tail, 13);
    // printList(head);
    insertattail(tail,head,  9);
    printList(head);
    cout<<"head->data "<<head->data<<endl;
    cout<<"tail-> data "<<tail->data<<endl;
    insertatpost(head, tail, 3, 22);
    printList(head);
    deleteNode(head, 4);
    printList(head);
    // cout<<getLength(head)<<endl;
   
}
