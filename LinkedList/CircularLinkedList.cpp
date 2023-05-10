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

    void insertNode(Node* &tail,int element, int data){

        if(tail == NULL ){
            Node*temp = new Node(data);
            tail = temp;
            temp->next =temp;
        }
        else{
            //non empty list
            Node* current = tail;
            while(current->data != tail->data){
                current = current->next;
            }
            //elemtn found curr is representing that elemnts
            Node* temp =  new Node(data);
            temp->next = current->next;
            current->next = temp;
             
        }
    }
    void printList(Node* tail){
        Node*temp = tail;
        do{
            cout<<tail->data<<" ";
            tail = tail->next;
        }while(tail != temp);
        cout<<endl;
    }
    int main(){
        Node* tail = NULL;
        insertNode(tail, 2, 3);
        insertNode(tail, 3, 5);
        insertNode(tail, 3, 4);
        printList(tail);
    }