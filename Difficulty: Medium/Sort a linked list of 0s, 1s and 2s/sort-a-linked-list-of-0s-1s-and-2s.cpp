/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // int count0=0;
        // int count1=0;
        // int count2=0;
        // Node* temp=head;
        // while(temp!=NULL){
        //     if (temp->data==0){
        //         count0++;
        //     }
        //     else if (temp->data==1){
        //         count1++;
        //     }
        //     else{
        //         count2++;
        //     }
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp!=NULL){
        //     if (count0){
        //         temp->data=0;
        //         count0--;
        //     }
        //     else if (count1){
        //         temp->data=1;
        //         count1--;
        //     }
        //     else{
        //         temp->data=2;
        //         count2--;
        //     }
        //     temp=temp->next;
        // }
        // return head;
    if (!head || !head->next) return head;
    Node* zeroD = new Node(-1);
    Node* oneD  = new Node(-1);
    Node* twoD  = new Node(-1);

    Node* zero = zeroD;
    Node* one  = oneD;
    Node* two  = twoD;
    Node* curr = head;
    while (curr) {
        if (curr->data == 0) {
            zero->next = curr;
            zero = zero->next;
        }
        else if (curr->data == 1) {
            one->next = curr;
            one = one->next;
        }
        else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }
    zero->next = (oneD->next) ? oneD->next : twoD->next;
    one->next = twoD->next;
    two->next = NULL;
    head = zeroD->next;
    delete zeroD;
    delete oneD;
    delete twoD;

    return head;

        
        
        
    }
};