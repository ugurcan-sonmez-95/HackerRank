// Reverse a linked list - Solution

#include <iostream>
#include <memory>

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;
        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;
        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }
        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
            if (!this->head) 
                this->head = node;
            else 
                this->tail->next = node;
            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        std::cout << node->data << " ";
        node = node->next;
    }
}

// Reverses the linked list
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    // Initialize prev, cur and next
    SinglyLinkedListNode *cur = head, *prev = nullptr, *next = nullptr;
    // Assign cur->next to next
    while (cur != nullptr) {
        next = cur->next;
        // Reverse the point that current node points to
        cur->next = prev;
        // Move prev and cur to the next node
        prev = cur;
        cur = next;
    }
    head = prev;
    return head;
}

int main() {
    int testCount;
    std::cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        std::unique_ptr<SinglyLinkedList> llist = std::make_unique<SinglyLinkedList>();
        int llist_size;
        std::cin >> llist_size;
        for (int i = 0; i < llist_size; i++) {
            int llist_item;
            std::cin >> llist_item;
            llist->insert_node(llist_item);
        }
        SinglyLinkedListNode *llist1 = reverse(llist->head);
        print_singly_linked_list(llist1);
    }
    return 0;
}