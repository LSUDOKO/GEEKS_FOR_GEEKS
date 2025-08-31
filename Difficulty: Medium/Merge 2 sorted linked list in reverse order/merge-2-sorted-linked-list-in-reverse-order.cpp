/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution {
  public:
    struct Node* mergeTwoLists(Node *node1, Node *node2){
        if (node1 == NULL) return node2;
        if (node2 == NULL) return node1;

        struct Node* result;
        if (node1->data > node2->data) {
            result = node2;
            result->next = mergeTwoLists(node1, node2->next); 
        }
        else {
            result = node1;
            result->next = mergeTwoLists(node1->next, node2); 
        }
        return result;     }

    struct Node* reverseList(Node *head){
        if (head == NULL || head->next == NULL){
            return head;
        }
        struct Node *last = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return last;
    }

    struct Node *mergeResult(Node *node1, Node *node2) {
        struct Node* result = mergeTwoLists(node1, node2);
        result = reverseList(result);
        return result;
    }
};
