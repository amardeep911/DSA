// Node* floydCycleDetection(head){
    
//     if(head == NULL){
//         return true;

//     }

//     Node* slow = head;
//     Node* fast = head;

//     while(slow != NULL && fast!=NULL){
//         fast = fast->next;
//         if(fast!=NULL){
//             fast= fast-> next;
//         }
//         slow = slow->next;

//         if(slow == fast){
//             return true;
//         }
//     }
//     return false;


// }

// floyd cycle detection doesn't tell you about the starting positon of the loop it can either be any between the loop