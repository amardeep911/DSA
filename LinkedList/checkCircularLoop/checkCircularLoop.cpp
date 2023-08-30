
// bool checkLoop(head){

//     if(head == NULL){
//         return true;
//     }

//     map<Node* , bool> visited;

//     Node* temp = head;
//     while(temp != NULL){
//         if(visited[temp] == true){
//             cout<<"yes cyclic is presnet at"<<temp->data<<endl;
//             return true;
//         }

//         visited[temp] == true;
//         temp = temp->next;
//     }
//     return false
// }