/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
public:
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        while (curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    Node* addOne(Node* head) {
        if (head == NULL) return head;
        head = reverse(head);
        Node* temp = head;
        int carry = 1;
        while (temp != NULL) {
            int sum = temp->data + carry;
            temp->data = sum % 10;
            carry = sum / 10;
            if (temp->next == NULL && carry > 0) {
                temp->next = new Node(carry);
                carry = 0;
            }
            temp = temp->next;
        }
        head = reverse(head);
        return head;
    }
};