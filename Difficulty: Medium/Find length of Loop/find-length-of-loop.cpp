/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        if (head==NULL || head->next==NULL)
        return 0;
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast){
                break;
            }
        }
        if (slow!=fast) return 0;
        Node *p=head;
        int count=0;
        while(p!=slow){
            p=p->next;
            slow=slow->next;
        }
        slow=slow->next;
        while(slow!=p){
            slow=slow->next;
            count++;
        }
        return count+1;
    }
};